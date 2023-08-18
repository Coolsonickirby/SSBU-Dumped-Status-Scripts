
void __thiscall L2CFighterIke::status::Rebound_pre(L2CFighterIke *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  Hash40 HVar3;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_pre_Rebound(this);
  lib::L2CValue::_L2CValue(aLStack80);
  HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,HVar3);
  lib::L2CValue::L2CValue(aLStack64,0xcef73e16f);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0xf078fa63d);
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::L2CValue(aLStack112,true);
    HVar3 = lib::L2CValue::as_hash(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    bVar2 = lib::L2CValue::as_bool(aLStack112);
    app::lua_bind::EffectModule__kill_kind_impl
              (this->moduleAccessor,HVar3,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

