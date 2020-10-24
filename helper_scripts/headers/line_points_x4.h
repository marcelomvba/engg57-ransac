#define NUM_POINTS_ 210
#define DATA_SIZE_ 420
const unsigned char data_points_[420] = {18, 118, 22, 118, 22, 122, 22, 126, 26, 118, 26, 122, 26, 126, 26, 130, 26, 134, 30, 118, 30, 122, 30, 126, 30, 130, 30, 134, 34, 118, 34, 122, 34, 126, 34, 130, 34, 134, 38, 118, 38, 122, 38, 126, 38, 130, 38, 134, 42, 118, 42, 122, 42, 126, 42, 130, 42, 134, 46, 118, 46, 122, 46, 126, 50, 118, 50, 122, 50, 126, 54, 122, 54, 126, 54, 134, 58, 122, 58, 126, 58, 134, 62, 118, 62, 122, 62, 126, 62, 134, 66, 118, 66, 122, 66, 126, 66, 130, 70, 122, 70, 126, 70, 130, 70, 134, 74, 122, 74, 130, 74, 134, 78, 122, 78, 134, 82, 122, 82, 126, 82, 130, 86, 118, 86, 122, 86, 126, 86, 130, 86, 134, 90, 122, 90, 126, 90, 130, 90, 134, 94, 118, 94, 122, 94, 126, 94, 130, 94, 134, 98, 118, 98, 126, 98, 130, 98, 134, 102, 118, 102, 126, 102, 130, 102, 134, 106, 122, 106, 126, 106, 130, 106, 134, 110, 118, 110, 122, 110, 126, 110, 130, 110, 134, 114, 118, 114, 122, 114, 126, 114, 130, 118, 122, 118, 126, 118, 130, 122, 122, 122, 126, 122, 130, 122, 134, 126, 122, 126, 126, 126, 130, 126, 134, 130, 122, 130, 126, 130, 130, 130, 134, 134, 122, 134, 126, 134, 130, 134, 134, 138, 122, 138, 126, 138, 130, 138, 134, 142, 122, 142, 126, 142, 130, 142, 134, 146, 122, 146, 126, 146, 130, 146, 134, 150, 122, 150, 126, 150, 130, 150, 134, 154, 122, 154, 126, 154, 130, 154, 134, 158, 122, 158, 126, 158, 130, 158, 134, 162, 122, 162, 126, 162, 130, 166, 122, 166, 126, 166, 130, 166, 134, 170, 122, 170, 126, 170, 130, 170, 134, 174, 122, 174, 130, 174, 134, 178, 122, 178, 126, 178, 130, 178, 134, 182, 122, 182, 126, 182, 130, 182, 134, 186, 122, 186, 126, 186, 134, 190, 122, 190, 126, 190, 130, 194, 122, 194, 126, 194, 130, 194, 134, 198, 126, 198, 130, 198, 134, 202, 122, 202, 134, 206, 122, 206, 126, 206, 130, 206, 134, 210, 122, 210, 126, 210, 130, 210, 134, 214, 122, 214, 126, 214, 130, 214, 134, 218, 122, 218, 126, 218, 130, 218, 134, 222, 122, 222, 126, 222, 130, 222, 134, 226, 122, 226, 126, 226, 130, 226, 134, 230, 122, 230, 126, 230, 130, 230, 134, 234, 122, 234, 126, 234, 130, 234, 134, 238, 130, 238, 134};
unsigned char inlier_mask_[210] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};