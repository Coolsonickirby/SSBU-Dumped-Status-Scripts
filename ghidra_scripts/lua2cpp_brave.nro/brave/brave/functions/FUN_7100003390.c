
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100003390(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_SPECIAL_LW_WINDOW_STATE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BRAVE_COMMAND_WINDOW_STATE_CLOSE);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,
               _FIGHTER_BRAVE_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_ENABLE_COMMAND_WINDOW_OVERWRITE);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      bVar4 = false;
      goto LAB_710000349c;
    }
  }
  bVar4 = true;
LAB_710000349c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,bVar4);
  return;
}

