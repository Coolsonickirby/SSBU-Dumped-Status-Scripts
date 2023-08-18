
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::ShizueSpecialNSearch_end(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,1.0);
  fVar3 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_SHIZUE_SPECIAL_N_POCKET);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TARGET_OBJECT_ID);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::L2CValue(aLStack64,0x50000000);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x29660ac06a);
      lib::L2CValue::L2CValue(aLStack96,false);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

