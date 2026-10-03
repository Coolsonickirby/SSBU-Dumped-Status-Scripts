
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100053f20(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue *in_x3;
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack640,in_x1);
  lib::L2CValue::L2CValue(aLStack656,in_x2);
  lib::L2CValue::L2CValue(aLStack672,in_x3);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_R);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xe5771ed94);
      lib::L2CValue::operator=(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xfede098bd);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x1444d8435b);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xf9ae7a82b);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x1433df73cd);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x13d3045878);
      lib::L2CValue::operator=(aLStack176,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xdc76c0a9c);
      lib::L2CValue::operator=(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xee3ab0d68);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x1367deb884);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xe94ac3dfe);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x1310d98812);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x120c98388f);
      lib::L2CValue::operator=(aLStack176,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xf868bc949);
      lib::L2CValue::operator=(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x142fb312af);
      lib::L2CValue::operator=(aLStack176,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x101553ccf0);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x155c93b366);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x106254fc66);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x152b9483f0);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xe88c05c9c);
      lib::L2CValue::operator=(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x130cb5e970);
      lib::L2CValue::operator=(aLStack176,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xfe3e4a13e);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x144adc7ad8);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xf94e391a8);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x143ddb4a4e);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack224,aLStack128);
  lib::L2CValue::L2CValue(aLStack240,aLStack640);
  FUN_7100056920(aLStack80,aLStack224,aLStack240);
  lib::L2CValue::operator=(aLStack208,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R);
  iVar2 = lib::L2CValue::as_integer(aLStack288);
  lVar4 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack272,lVar4);
  lib::L2CValue::L2CValue(aLStack304,aLStack144);
  lib::L2CValue::L2CValue(aLStack320,aLStack160);
  lib::L2CValue::L2CValue(aLStack336,aLStack176);
  lib::L2CValue::L2CValue(aLStack352,aLStack192);
  lib::L2CValue::L2CValue(aLStack368,0x56061c80f);
  lib::L2CValue::L2CValue(aLStack384,0xae4fd20b8);
  lib::L2CValue::L2CValue(aLStack400,0x7e096c9f5);
  lib::L2CValue::L2CValue(aLStack416,0xcd5cdf23f);
  lib::L2CValue::L2CValue(aLStack432,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
  lib::L2CValue::L2CValue(aLStack448,aLStack640);
  lib::L2CValue::L2CValue(aLStack464,aLStack656);
  lib::L2CValue::L2CValue(aLStack480,aLStack672);
  lib::L2CValue::L2CValue(aLStack496,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  lib::L2CValue::L2CValue(aLStack512,_FIGHTER_TANTAN_LINK_NO_PUNCH_R);
  lib::L2CValue::L2CValue(aLStack528,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_SHIFT_ANGLE_R);
  lib::L2CValue::L2CValue(aLStack544,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_SHIFT_CONTROL_R);
  lib::L2CValue::L2CValue(aLStack560,aLStack112);
  lib::L2CValue::L2CValue(aLStack576,aLStack128);
  lib::L2CValue::L2CValue(aLStack592,aLStack208);
  lib::L2CValue::L2CValue
            (aLStack608,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_MAP_COLL_OFFSET_X_R);
  lib::L2CValue::L2CValue(aLStack624,0x5af9e82ca);
  FUN_71000583b0(aLStack80,this,aLStack256,aLStack272,aLStack304,aLStack320,aLStack336,aLStack352,
                 aLStack368,aLStack384,aLStack400,aLStack416,aLStack432,aLStack448,aLStack464,
                 aLStack480,aLStack496,aLStack512,aLStack528,aLStack544,aLStack560,aLStack576,
                 aLStack592,aLStack608,aLStack624);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack624);
  lib::L2CValue::~L2CValue(aLStack608);
  lib::L2CValue::~L2CValue(aLStack592);
  lib::L2CValue::~L2CValue(aLStack576);
  lib::L2CValue::~L2CValue(aLStack560);
  lib::L2CValue::~L2CValue(aLStack544);
  lib::L2CValue::~L2CValue(aLStack528);
  lib::L2CValue::~L2CValue(aLStack512);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack480);
  lib::L2CValue::~L2CValue(aLStack464);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_F);
  iVar2 = lib::L2CValue::as_integer(aLStack288);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack672);
  lib::L2CValue::~L2CValue(aLStack656);
  lib::L2CValue::~L2CValue(aLStack640);
  return;
}

