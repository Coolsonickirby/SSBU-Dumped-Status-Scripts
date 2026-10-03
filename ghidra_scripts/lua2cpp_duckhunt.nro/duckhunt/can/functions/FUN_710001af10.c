
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001af10(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  L2CValue *this;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
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
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  iVar4 = _WEAPON_DUCKHUNT_RETICLE_USER_ID_SMASH;
  if ((bVar1 & 1U) == 0) {
LAB_710001afc4:
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_4);
    if ((bVar1 & 1U) != 0) {
      app::lua_bind::PostureModule__reverse_lr_impl(param_1->moduleAccessor);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(param_1->moduleAccessor);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_3PS_USER_ID);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar4);
    uVar6 = lib::L2CValue::operator==(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) goto LAB_710001afc4;
    lib::L2CValue::L2CValue(aLStack112,0x9dc05a56b);
    lib::L2CValue::L2CValue(aLStack128,0x1ad8a32139);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar8 = lib::L2CValue::as_integer(aLStack128);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_1->moduleAccessor,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,0x66933a7e6);
    lib::L2CValue::L2CValue(aLStack144,100);
    HVar7 = lib::L2CValue::as_hash(aLStack128);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    uVar5 = app::sv_math::rand(HVar7,iVar4);
    lib::L2CValue::L2CValue(aLStack112,uVar5);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    uVar6 = lib::L2CValue::operator<=(aLStack96,aLStack112);
    if ((uVar6 & 1) != 0) {
      app::lua_bind::PostureModule__reverse_lr_impl(param_1->moduleAccessor);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(param_1->moduleAccessor);
    }
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,0x66933a7e6);
  lib::L2CValue::L2CValue(aLStack128,100);
  HVar7 = lib::L2CValue::as_hash(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = app::sv_math::rand(HVar7,iVar4);
  lib::L2CValue::L2CValue(aLStack112,uVar5);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x32);
  uVar6 = lib::L2CValue::operator<=(aLStack96,aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,-1.0);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_SPIN_DIR);
    fVar10 = (float)lib::L2CValue::as_number(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar10,iVar4);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,1.0);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_SPIN_DIR);
    fVar10 = (float)lib::L2CValue::as_number(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_float_impl(param_1->moduleAccessor,fVar10,iVar4);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_FALL_ACCEL);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  ppBVar9 = &param_1->moduleAccessor;
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack176,0x9dc05a56b);
  lib::L2CValue::L2CValue(aLStack192,0x1202aef011);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  uVar8 = lib::L2CValue::as_integer(aLStack192);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack160,fVar10);
  lib::L2CValue::operator-(aLStack128,aLStack160);
  lib::L2CValue::L2CValue(aLStack240,0x9dc05a56b);
  lib::L2CValue::L2CValue(aLStack256,0x1ec51683d2);
  uVar6 = lib::L2CValue::as_integer(aLStack240);
  uVar8 = lib::L2CValue::as_integer(aLStack256);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack224,fVar10);
  lib::L2CValue::operator*(aLStack224,param_2);
  lib::L2CValue::operator-(aLStack96,aLStack208);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack272,aLStack144);
  FUN_7100013ca0(aLStack96,param_1,aLStack272);
  lib::L2CValue::operator=(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,aLStack144);
  FUN_7100013de0(param_1,aLStack288,aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_MAX_FALL_SPEED);
  iVar4 = lib::L2CValue::as_integer(aLStack192);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack176,fVar10);
  lib::L2CValue::L2CValue(aLStack224,0x9dc05a56b);
  lib::L2CValue::L2CValue(aLStack240,0x16d8a8d0d5);
  uVar6 = lib::L2CValue::as_integer(aLStack224);
  uVar8 = lib::L2CValue::as_integer(aLStack240);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack208,fVar10);
  lib::L2CValue::operator+(aLStack176,aLStack208);
  lib::L2CValue::L2CValue(aLStack336,0x9dc05a56b);
  lib::L2CValue::L2CValue(aLStack352,0x229c1f548a);
  uVar6 = lib::L2CValue::as_integer(aLStack336);
  uVar8 = lib::L2CValue::as_integer(aLStack352);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack320,fVar10);
  lib::L2CValue::operator*(aLStack320,param_2);
  lib::L2CValue::operator+(aLStack96,aLStack256);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack368,aLStack160);
  FUN_7100013f10(aLStack96,param_1,aLStack368);
  lib::L2CValue::operator=(aLStack160,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator+(aLStack160,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_MAX_FALL_SPEED);
  fVar10 = (float)lib::L2CValue::as_number(aLStack176);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack176);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack176,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_RECORD_YARARE_SPEED);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((bVar1 & 1U) == 0) goto LAB_710001bee8;
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_YARARE_SPEED_X);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack176,fVar10);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_YARARE_SPEED_Y);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack192,fVar10);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x9dc05a56b);
    lib::L2CValue::L2CValue(aLStack224,0x1633137bf5);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    uVar8 = lib::L2CValue::as_integer(aLStack224);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack208,fVar10);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack96);
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack240,HVar7);
    lib::L2CValue::L2CValue(aLStack96,0x564b918b6);
    uVar6 = lib::L2CValue::operator==(aLStack240,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    bVar1 = (uVar6 & 1) == 0;
    if (bVar1) {
      HVar7 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack256,HVar7);
      lib::L2CValue::L2CValue(aLStack96,0x39d762289);
      bVar2 = lib::L2CValue::operator==(aLStack256,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    else {
      bVar2 = 1;
    }
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar2 & 1));
    if (bVar1) {
      lib::L2CValue::~L2CValue(aLStack256);
    }
    lib::L2CValue::~L2CValue(aLStack240);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack224);
    if (((bVar1 & 1U) != 0) &&
       (uVar6 = lib::L2CValue::operator<(aLStack192,aLStack208), (uVar6 & 1) != 0)) {
      lib::L2CValue::operator=(aLStack192,aLStack208);
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_TYPE_NORMAL);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack176);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_RECORD_YARARE_SPEED);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar4);
    this = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x178659055c);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    iVar4 = app::lua_bind::SoundModule__play_se_impl(*ppBVar9,HVar7,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack384,iVar4);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x17f15e35ca);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::SoundModule__stop_se_impl(*ppBVar9,HVar7,0);
    lib::L2CValue::~L2CValue(aLStack96);
    FUN_710001c5b0(param_1);
    lib::L2CValue::L2CValue(aLStack96,0x9dc05a56b);
    lib::L2CValue::L2CValue(aLStack192,0xf17423787);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    uVar8 = lib::L2CValue::as_integer(aLStack192);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack176,fVar10);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x9dc05a56b);
    lib::L2CValue::L2CValue(aLStack208,0xf60450711);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    uVar8 = lib::L2CValue::as_integer(aLStack208);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack192,fVar10);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x9dc05a56b);
    lib::L2CValue::L2CValue(aLStack224,0x1973999032);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    uVar8 = lib::L2CValue::as_integer(aLStack224);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack208,fVar10);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x9dc05a56b);
    lib::L2CValue::L2CValue(aLStack240,0x194ef9b982);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    uVar8 = lib::L2CValue::as_integer(aLStack240);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack224,fVar10);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_MAX_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack256);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack240,iVar4);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator<(aLStack96,aLStack240);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack256);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::operator*(aLStack176,aLStack208);
      lib::L2CValue::operator=(aLStack176,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::operator*(aLStack192,aLStack224);
      lib::L2CValue::operator=(aLStack192,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_BASE_HOP_SPEED_X);
    fVar10 = (float)lib::L2CValue::as_number(aLStack176);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__add_float_impl(*ppBVar9,fVar10,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_BASE_HOP_SPEED_X)
    ;
    iVar4 = lib::L2CValue::as_integer(aLStack256);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::L2CValue(aLStack352,0x9dc05a56b);
    lib::L2CValue::L2CValue(aLStack400,0x1b05ef771c);
    uVar6 = lib::L2CValue::as_integer(aLStack352);
    uVar8 = lib::L2CValue::as_integer(aLStack400);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack336,fVar10);
    lib::L2CValue::operator*(aLStack336,param_2);
    lib::L2CValue::operator+(aLStack96,aLStack320);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack96,0x9dc05a56b);
    lib::L2CValue::L2CValue(aLStack320,0xbae346628);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    uVar8 = lib::L2CValue::as_integer(aLStack320);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack256,fVar10);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack96);
    uVar6 = lib::L2CValue::operator<(aLStack256,aLStack240);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::operator=(aLStack240,aLStack256);
    }
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack320,fVar10);
    lib::L2CValue::operator*(aLStack320,aLStack240);
    lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack352,fVar10);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack416,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_PRE_HOP_INIT_SPEED_Y);
    iVar4 = lib::L2CValue::as_integer(aLStack416);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::operator+(aLStack96,aLStack192);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::L2CValue(aLStack96,0x9dc05a56b);
    lib::L2CValue::L2CValue(aLStack432,0x15cc86a140);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    uVar8 = lib::L2CValue::as_integer(aLStack432);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack416,fVar10);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::operator-(aLStack400,aLStack352);
    uVar6 = lib::L2CValue::operator<(aLStack416,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::operator+(aLStack352,aLStack416);
      lib::L2CValue::operator=(aLStack400,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_TYPE_NORMAL);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack336);
    lib::L2CAgent::push_lua_stack(param_1,aLStack400);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator+(aLStack400,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_PRE_HOP_INIT_SPEED_Y);
    fVar10 = (float)lib::L2CValue::as_number(aLStack432);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack256);
    this = aLStack240;
  }
  lib::L2CValue::~L2CValue(this);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
LAB_710001bee8:
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_NEXT_ROT_SPEED);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack448,fVar10);
  FUN_7100014010(param_1,aLStack448);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

