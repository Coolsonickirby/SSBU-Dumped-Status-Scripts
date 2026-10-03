
void FUN_7100015bc0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  L2CValue *this;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
  iVar1 = lib::L2CValue::as_integer(param_3);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  uVar2 = lib::L2CValue::operator==(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(param_1,(uint)((uVar2 & 1) != 0));
  return;
}

