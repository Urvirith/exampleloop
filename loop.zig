const std = @import("std");

const str = [_]u8{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '2', '3', '4', '5', '6', '7', '9'};

pub fn main() void {
    const times = std.time.milliTimestamp();
    const se: i64 = 1000;

    var start = times;

    for(str) |i| {
        for(str) |j| {
            for(str) |k| {
                for(str) |l| {
                    for(str) |m| {
                        std.debug.print("{c}", .{i});
                        std.debug.print("{c}", .{j});
                        std.debug.print("{c}", .{k});
                        std.debug.print("{c}", .{l});
                        std.debug.print("{c}\n", .{m});
                    }
                }
            }
        }
    }

    var end = times;
    std.debug.print("{d}", .{@divFloor((end - start), se)});
}