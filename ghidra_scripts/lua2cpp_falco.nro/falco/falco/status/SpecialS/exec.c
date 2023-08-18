
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterFalco::status::SpecialS_exec(L2CFighterFalco *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_INSTANCE_WORK_ID_FLAG_ILLUSION_LANDING);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_INSTANCE_WORK_ID_FLAG_ILLUSION_LANDING);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  ppBVar8 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP_PREV);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    FUN_7100005700(this);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_ILLUSION_STEP_START);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_ILLUSION_STEP_RUSH);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_ILLUSION_STEP_END);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STOP_Y_FRAME);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack80,0);
          uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
            lib::L2CValue::L2CValue(aLStack112,0);
            lib::L2CValue::L2CValue(aLStack128,0.0);
            lib::L2CValue::L2CValue(aLStack144,0.0);
            lib::L2CValue::L2CValue(aLStack160,0.0);
            lib::L2CValue::L2CValue(aLStack176,0.0);
            lib::L2CValue::L2CValue(aLStack192,0.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
            app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
            lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
            lib::L2CValue::L2CValue(aLStack160,0x18e1cb5623);
            uVar6 = lib::L2CValue::as_integer(aLStack144);
            uVar7 = lib::L2CValue::as_integer(aLStack160);
            fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
            lib::L2CValue::L2CValue(aLStack128,fVar9);
            lib::L2CValue::operator_(aLStack128);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            app::sv_kinetic_energy::set_accel(this->luaStateAgent);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::KineticModule__enable_energy_impl(*ppBVar8,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
          }
        }
        FUN_7100006a20(this);
      }
      goto LAB_7100004db8;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_RUSH_FORCE_END);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_HIT_SHIELD);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) goto LAB_7100004db8;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    FUN_7100005700(this);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_ILLUSION_STEP_FORCE_END);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_HIT_SHIELD);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_7100004db8;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_HIT_SHIELD_TO_END)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STOP_Y_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack144,0x15d86ad648);
        uVar6 = lib::L2CValue::as_integer(aLStack128);
        uVar7 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack112,0);
          lib::L2CValue::L2CValue(aLStack128,0.0);
          lib::L2CValue::L2CValue(aLStack144,0.0);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
          app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack192);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack160,0x106a4360ce);
          uVar6 = lib::L2CValue::as_integer(aLStack144);
          uVar7 = lib::L2CValue::as_integer(aLStack160);
          fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack128,fVar9);
          lib::L2CValue::operator_(aLStack128);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
          app::sv_kinetic_energy::set_accel(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__enable_energy_impl(*ppBVar8,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_RUSH_FORCE_END);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_7100004db8;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_FLAG_CONTINUE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    FUN_7100005700(this);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_ILLUSION_STEP_FORCE_END);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_ILLUSION_STATUS_WORK_ID_INT_STEP);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100004db8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

