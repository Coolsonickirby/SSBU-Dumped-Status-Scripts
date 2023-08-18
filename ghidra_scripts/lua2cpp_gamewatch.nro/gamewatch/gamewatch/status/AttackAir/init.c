
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::AttackAir_init(L2CFighterGamewatch *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    iVar1 = app::lua_bind::StatusModule__prev_status_kind_impl(this->moduleAccessor,0);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_HI_FALL);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      pLVar2 = aLStack80;
    }
    else {
      fVar5 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar5);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) goto LAB_7100004fd4;
      lib::L2CValue::L2CValue(aLStack80,0x12ec5626fe);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar3 = lib::L2CValue::as_integer(aLStack80);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack64,fVar5);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack128,0xbaa236c29);
      uVar3 = lib::L2CValue::as_integer(aLStack112);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack96,fVar5);
      lib::L2CValue::operator_(aLStack64,aLStack96);
      lib::L2CValue::operator_(aLStack64,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::operator_(aLStack64);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar2 = aLStack64;
    }
    lib::L2CValue::_L2CValue(pLVar2);
  }
LAB_7100004fd4:
  lua2cpp::L2CFighterCommon::sub_attack_air_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

