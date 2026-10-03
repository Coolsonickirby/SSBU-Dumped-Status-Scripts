
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100011ba0(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3,L2CValue *param_4)

{
  L2CValue *this;
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
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
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar5 = lib::L2CValue::operator==(aLStack208,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack224,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(param_2,(L2CValue)0x20);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      else {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(param_2);
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar5 = lib::L2CValue::operator==(aLStack144,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar5 & 1) != 0) goto LAB_7100011ce8;
      }
      lib::L2CValue::L2CValue(param_1,1);
      goto LAB_7100012320;
    }
    lib::L2CValue::~L2CValue(aLStack112);
LAB_7100011ce8:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::operator=(aLStack112,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::operator=(aLStack112,aLStack96);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack240,aLStack112);
      lib::L2CValue::L2CValue(aLStack256,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(param_1,1);
      lib::L2CValue::~L2CValue(aLStack112);
      goto LAB_7100012320;
    }
  }
  lib::L2CValue::L2CValue(aLStack288,aLStack208);
  lib::L2CValue::L2CValue(aLStack304,param_3);
  lib::L2CValue::L2CValue(aLStack320,param_4);
  lib::L2CValue::L2CValue(aLStack336,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack352,_FIGHTER_KINETIC_TYPE_ZELDA_SPECIAL_LW_AIR);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator==(aLStack288,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  this = &param_2->globalTable;
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_7100011e14;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_7100011e14;
    }
    lib::L2CValue::L2CValue(aLStack272,0);
  }
  else {
LAB_7100011e14:
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack160,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::GroundModule__correct_impl(param_2->moduleAccessor,GVar3);
      lib::L2CValue::~L2CValue(aLStack160);
      iVar4 = lib::L2CValue::as_integer(aLStack352);
      app::lua_bind::KineticModule__change_kinetic_impl(param_2->moduleAccessor,iVar4);
      lib::L2CValue::operator=(aLStack144,aLStack320);
      lib::L2CValue::operator=(aLStack112,aLStack304);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0xa0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack160,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
      GVar3 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::GroundModule__correct_impl(param_2->moduleAccessor,GVar3);
      lib::L2CValue::~L2CValue(aLStack160);
      iVar4 = lib::L2CValue::as_integer(aLStack336);
      app::lua_bind::KineticModule__change_kinetic_impl(param_2->moduleAccessor,iVar4);
      lib::L2CValue::operator=(aLStack144,aLStack304);
      lib::L2CValue::operator=(aLStack112,aLStack320);
    }
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,HVar7);
    lib::L2CValue::operator=(aLStack128,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    uVar5 = lib::L2CValue::operator==(aLStack128,aLStack144);
    if ((uVar5 & 1) == 0) {
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack112);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,1.0);
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar7 = lib::L2CValue::as_hash(aLStack144);
        fVar10 = (float)lib::L2CValue::as_number(aLStack160);
        fVar9 = (float)lib::L2CValue::as_number(aLStack176);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::MotionModule__change_motion_impl
                  (param_2->moduleAccessor,HVar7,fVar10,fVar9,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
      }
      else {
        HVar7 = lib::L2CValue::as_hash(aLStack144);
        app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                  (param_2->moduleAccessor,HVar7,-1.0,1.0,0.0,false,false);
      }
    }
    lib::L2CValue::L2CValue(aLStack272,1);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack272);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator==(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                  (param_2->moduleAccessor,-1);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack176,0x1216c11242);
        uVar5 = lib::L2CValue::as_integer(aLStack160);
        uVar8 = lib::L2CValue::as_integer(aLStack176);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_2->moduleAccessor,uVar5,uVar8);
        lib::L2CValue::L2CValue(aLStack144,fVar10);
        lib::L2CValue::operator*(aLStack128,aLStack144);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack192);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
LAB_7100012320:
  lib::L2CValue::~L2CValue(aLStack208);
  return;
}

