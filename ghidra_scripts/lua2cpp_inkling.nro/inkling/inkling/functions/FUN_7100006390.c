
void FUN_7100006390(L2CValue *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  L2CValue *this;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),2);
  uVar1 = lib::L2CValue::as_integer(this);
  iVar2 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::L2CValue(aLStack48,0.0);
  uVar3 = lib::L2CValue::operator<(aLStack48,aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(param_1,(uVar3 & 1) == 0);
  return;
}

