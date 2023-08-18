
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::SpecialLwEnd_check_dmg(L2CFighterCloud *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue *in_x1;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,in_x1);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack80,0xb9ea8580a);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar3 = lib::L2CValue::operator_(aLStack64,pLVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CLOUD_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_DAMAGE);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,false);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

