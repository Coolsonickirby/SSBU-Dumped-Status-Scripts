
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMurabito::status::Attack_main_loop(L2CFighterMurabito *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_CANCEL_ATTACK_1);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      return;
    }
  }
  lua2cpp::L2CFighterCommon::status_Attack_Main(this);
  lib::L2CValue::L2CValue(aLStack96,1);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MURABITO_STATUS_ATTACK_FLAG_END_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_ATTACK_FLAG_ENABLE_100);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_CONTROL_PAD_BUTTON_ATTACK);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::ControlModule__check_button_off_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) != 0) {
          HVar5 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack128,HVar5);
          lib::L2CValue::L2CValue(aLStack96,0x99c52257e);
          uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,0xdce65e386);
            lib::L2CValue::L2CValue(aLStack128,0);
            lib::L2CValue::L2CValue(aLStack160,1.0);
            lib::L2CValue::L2CValue(aLStack176,false);
            HVar5 = lib::L2CValue::as_hash(aLStack96);
            fVar7 = (float)lib::L2CValue::as_number(aLStack128);
            fVar8 = (float)lib::L2CValue::as_number(aLStack160);
            bVar1 = lib::L2CValue::as_bool(aLStack176);
            app::lua_bind::MotionModule__change_motion_impl
                      (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,0xd89c59956);
            lib::L2CValue::L2CValue(aLStack128,0);
            lib::L2CValue::L2CValue(aLStack160,1.0);
            lib::L2CValue::L2CValue(aLStack176,false);
            HVar5 = lib::L2CValue::as_hash(aLStack96);
            fVar7 = (float)lib::L2CValue::as_number(aLStack128);
            fVar8 = (float)lib::L2CValue::as_number(aLStack160);
            bVar1 = lib::L2CValue::as_bool(aLStack176);
            app::lua_bind::MotionModule__change_motion_impl
                      (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
          }
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0x2b94de0d96);
          lib::L2CValue::L2CValue(aLStack160,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LOG_ATTACK_KIND_ATTACK13);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          app::sv_kinetic_energy::set_motion_energy_update_flag(this->luaStateAgent);
          this_00 = &this->globalTable;
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x13);
          lib::L2CValue::L2CValue(aLStack96,0);
          lib::L2CValue::operator_(pLVar6,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x14);
          lib::L2CValue::L2CValue(aLStack96,0);
          lib::L2CValue::operator_(pLVar6,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
          lib::L2CValue::L2CValue(aLStack96,0);
          lib::L2CValue::operator_(pLVar6,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_ATTACK_FLAG_END_MOTION);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ATTACK_FLAG_ENABLE_COMBO);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ATTACK_FLAG_RESTART);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack96);
        }
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

