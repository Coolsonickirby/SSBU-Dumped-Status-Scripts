
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100018830(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
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
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_HOP_BY_ATTACK);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  ppBVar9 = &param_2->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) goto LAB_71000194e0;
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_HOP_BY_ATTACK);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_HOP_BY_3PS);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_HOP_BY_3PS);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_GIVEN_ATTACK_POWER);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack304,fVar10);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_HOP_BY_ATTACK_SAME_TEAM);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack320,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_HOP_BY_ATTACK_SAME_TEAM);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_MAX_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar5 = lib::L2CValue::operator<(aLStack96,aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
LAB_7100018adc:
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator==(aLStack288,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_7100018adc;
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator==(aLStack320,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack336,_WEAPON_DUCKHUNT_CAN_STATUS_KIND_EXPLODE);
      lib::L2CValue::L2CValue(aLStack352,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::L2CValue(param_1,1);
      goto LAB_7100018cd8;
    }
  }
  lib::L2CValue::L2CValue(aLStack368,aLStack304);
  lib::L2CValue::L2CValue(aLStack384,aLStack288);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_LETS_REVERSE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack400,(bool)(bVar1 & 1));
  FUN_710001af10(param_2,aLStack368,aLStack384,aLStack400);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_HOP_TIMES);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__inc_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_MAX_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar5 = lib::L2CValue::operator<(aLStack96,aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_MAX_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__dec_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_MAX_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack416,_WEAPON_DUCKHUNT_CAN_STATUS_KIND_EXPLODE);
      lib::L2CValue::L2CValue(aLStack432,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::L2CValue(param_1,1);
LAB_7100018cd8:
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      return;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack224 + 0x10),_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_MAX_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack192,iVar3);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack192);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
  if ((uVar5 & 1) == 0) {
    HVar6 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack192,HVar6);
    lib::L2CValue::L2CValue(aLStack96,0x564b918b6);
    uVar5 = lib::L2CValue::operator==(aLStack192,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,false);
      lib::L2CValue::operator=(aLStack160,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator=(aLStack160,aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack224 + 0x10),_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_HP);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack192,fVar10);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar5 = lib::L2CValue::operator<(aLStack96,aLStack192);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack224,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_HOP_TIMES);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack256,0x9dc05a56b);
      lib::L2CValue::L2CValue(aLStack272,0xb40391041);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar7 = lib::L2CValue::as_integer(aLStack272);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack240,iVar3);
      uVar5 = lib::L2CValue::operator<(aLStack96,aLStack240);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack224);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
      if ((uVar5 & 1) != 0) {
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack160);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,0x3538a83b3);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),1.0);
          lib::L2CValue::L2CValue((L2CValue *)auStack224,false);
          HVar6 = lib::L2CValue::as_hash(aLStack96);
          fVar10 = (float)lib::L2CValue::as_number(aLStack192);
          fVar11 = (float)lib::L2CValue::as_number((L2CValue *)(auStack224 + 0x10));
          bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack224);
          app::lua_bind::MotionModule__change_motion_impl
                    (*ppBVar9,HVar6,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
          lib::L2CValue::~L2CValue((L2CValue *)auStack224);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack96);
          FUN_7100018460(param_2);
        }
        goto LAB_71000194a0;
      }
    }
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack192,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_HP);
    fVar10 = (float)lib::L2CValue::as_number(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,0x9dc05a56b);
    lib::L2CValue::L2CValue(aLStack240,0x10026af254);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::operator-(aLStack96);
    FUN_7100013de0(param_2,aLStack192,auStack224 + 0x10);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::operator!(aLStack160);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack224,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::operator=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack224);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::operator=(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack224);
      lib::L2CValue::L2CValue(aLStack240,0x9dc05a56b);
      lib::L2CValue::L2CValue(aLStack256,0x11f2e99c91);
      uVar5 = lib::L2CValue::as_integer(aLStack240);
      uVar7 = lib::L2CValue::as_integer(aLStack256);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::operator*(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack96,0x9dc05a56b);
      lib::L2CValue::L2CValue(aLStack256,0xd6991270c);
      uVar5 = lib::L2CValue::as_integer(aLStack96);
      uVar7 = lib::L2CValue::as_integer(aLStack256);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack240,fVar10);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)auStack224);
      pLVar8 = aLStack240;
      lib::L2CAgent::push_lua_stack(param_2,pLVar8);
      app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CAgent::math_abs((L2CAgent *)auStack224,pLVar8);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator+(aLStack272,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_BASE_HOP_SPEED_X);
      fVar10 = (float)lib::L2CValue::as_number(aLStack256);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator+(aLStack240,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_PRE_HOP_INIT_SPEED_Y);
      fVar10 = (float)lib::L2CValue::as_number(aLStack256);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    }
    FUN_710001ab50(param_2);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,0x9dc05a56b);
    lib::L2CValue::L2CValue(aLStack240,0x1b11d9cfba);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::operator=(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CValue::operator=(aLStack176,aLStack144);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_INVALID_HOP_FRAMES);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
    lib::L2CValue::~L2CValue(aLStack96);
  }
LAB_71000194a0:
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
LAB_71000194e0:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

