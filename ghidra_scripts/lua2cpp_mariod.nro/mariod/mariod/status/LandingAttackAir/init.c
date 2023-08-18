
void __thiscall
L2CFighterMariod::status::LandingAttackAir_init(L2CFighterMariod *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  lVar2 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,lVar2);
  lib::L2CValue::L2CValue(aLStack48,0xdde67d935);
  lib::L2CValue::operator__(aLStack64,aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

