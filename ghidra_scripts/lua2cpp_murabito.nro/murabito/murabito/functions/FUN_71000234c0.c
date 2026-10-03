
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000234c0(long param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_S_RIDE);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_S_RIDE_LOOP);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_LINK_NO_CLAYROCKET);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::LinkModule__is_link_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_LINK_NO_CLAYROCKET);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::LinkModule__unlink_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
  }
  return;
}

