
void __thiscall
L2CFighterMurabito::status::SpecialHiTurn_end(L2CFighterMurabito *this,L2CValue *return_value)

{
  ulong uVar1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_710001f700(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) != 0) {
    app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

