
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialLw_init(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor *pBVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0x14d64cabcb);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  ppBVar9 = &this->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue
            (aLStack144,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_LW_INT_WITCH_TIME_CANCEL_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_SLOW_TIME)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_LW_FLOAT_WITCH_TIME_SLOW_TIME);
  fVar10 = (float)lib::L2CValue::as_number(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack144,0x196f9a0fa0);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack112,fVar10);
  lib::L2CValue::operator_(aLStack112);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_SLOW_TIME)
  ;
  fVar10 = (float)lib::L2CValue::as_number(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__add_float_impl(*ppBVar9,fVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_SLOW_TIME)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar10);
  lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack160,0x1360284330);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  uVar5 = lib::L2CValue::operator_(aLStack96,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack160,0x1360284330);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_SLOW_TIME);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_LW);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_LW_FLAG_AIR_FIRST)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_LW_FLAG_AIR_FIRST);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      app::lua_bind::KineticModule__clear_speed_all_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_LW_FLAG_AIR_FIRST);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack160,0x7b9905530);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      lib::L2CValue::operator_(aLStack128);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack144,0xbd93356be);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack112,fVar10);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack144,0xbd93356be);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack112,fVar10);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    app::KineticUtility::clear_unable_energy(iVar3,pBVar8);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_INSTANCE_WORK_ID_FLAG_SPECIAL_AIR_LW);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    app::lua_bind::KineticModule__clear_speed_all_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_NO_SPEED_OPERATION_CHK);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_TYPE_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar9,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

