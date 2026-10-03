
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100050a30(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue *in_x3;
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
  
  lib::L2CValue::L2CValue(aLStack624,in_x1);
  lib::L2CValue::L2CValue(aLStack640,in_x2);
  lib::L2CValue::L2CValue(aLStack656,in_x3);
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
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_L);
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
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xead7ed0f7);
      lib::L2CValue::operator=(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xf39a1a762);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x1490997c84);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xf4ea697f4);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x14e79e4c12);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x13290b651b);
      lib::L2CValue::operator=(aLStack176,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xd3d6337ff);
      lib::L2CValue::operator=(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xe37ea32b7);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x13b39f875b);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xe40ed0221);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x13c498b7cd);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x12f69705ec);
      lib::L2CValue::operator=(aLStack176,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xf52caf696);
      lib::L2CValue::operator=(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x14fbf22d70);
      lib::L2CValue::operator=(aLStack176,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x1003eb428a);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x154a2b3d1c);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x1074ec721c);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x153d2c0d8a);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xe5c816343);
      lib::L2CValue::operator=(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x13d8f4d6af);
      lib::L2CValue::operator=(aLStack176,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xff55c2f44);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x145c64f4a2);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xf825b1fd2);
        lib::L2CValue::operator=(aLStack160,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x142b63c434);
        lib::L2CValue::operator=(aLStack192,aLStack80);
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack224,aLStack128);
  FUN_7100056760(aLStack80,this,aLStack224);
  lib::L2CValue::operator=(aLStack208,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
  iVar2 = lib::L2CValue::as_integer(aLStack272);
  lVar4 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack256,lVar4);
  lib::L2CValue::L2CValue(aLStack288,aLStack144);
  lib::L2CValue::L2CValue(aLStack304,aLStack160);
  lib::L2CValue::L2CValue(aLStack320,aLStack176);
  lib::L2CValue::L2CValue(aLStack336,aLStack192);
  lib::L2CValue::L2CValue(aLStack352,0x59a6ef56c);
  lib::L2CValue::L2CValue(aLStack368,0xadd214353);
  lib::L2CValue::L2CValue(aLStack384,0x71a99f496);
  lib::L2CValue::L2CValue(aLStack400,0xcec1191d4);
  lib::L2CValue::L2CValue(aLStack416,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  lib::L2CValue::L2CValue(aLStack432,aLStack624);
  lib::L2CValue::L2CValue(aLStack448,aLStack640);
  lib::L2CValue::L2CValue(aLStack464,aLStack656);
  lib::L2CValue::L2CValue(aLStack480,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
  lib::L2CValue::L2CValue(aLStack496,_FIGHTER_TANTAN_LINK_NO_PUNCH_L);
  lib::L2CValue::L2CValue(aLStack512,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_SHIFT_ANGLE_L);
  lib::L2CValue::L2CValue(aLStack528,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_SHIFT_CONTROL_L);
  lib::L2CValue::L2CValue(aLStack544,aLStack96);
  lib::L2CValue::L2CValue(aLStack560,aLStack128);
  lib::L2CValue::L2CValue(aLStack576,aLStack208);
  lib::L2CValue::L2CValue
            (aLStack592,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_MAP_COLL_OFFSET_X_L);
  lib::L2CValue::L2CValue(aLStack608,0x57bdfbd15);
  FUN_71000583b0(aLStack80,this,aLStack240,aLStack256,aLStack288,aLStack304,aLStack320,aLStack336,
                 aLStack352,aLStack368,aLStack384,aLStack400,aLStack416,aLStack432,aLStack448,
                 aLStack464,aLStack480,aLStack496,aLStack512,aLStack528,aLStack544,aLStack560,
                 aLStack576,aLStack592,aLStack608);
  lib::L2CValue::~L2CValue(aLStack80);
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
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack656);
  lib::L2CValue::~L2CValue(aLStack640);
  lib::L2CValue::~L2CValue(aLStack624);
  return;
}

