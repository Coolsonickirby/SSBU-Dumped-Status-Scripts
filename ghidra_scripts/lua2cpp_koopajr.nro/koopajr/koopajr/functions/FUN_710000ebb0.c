
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000ebb0(long param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue aLStack64 [16];
  
  pLVar4 = (L2CValue *)(param_1 + 200);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_CLIFF_WAIT);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_CLIFF_CLIMB);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_CLIFF_ATTACK);
      uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_CLIFF_ESCAPE);
        uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
          lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_CLIFF_JUMP1);
          uVar3 = lib::L2CValue::operator==(pLVar4,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue
                      (aLStack64,_FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_CLIFF_CATCH);
            iVar1 = lib::L2CValue::as_integer(aLStack64);
            app::lua_bind::WorkModule__off_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
            lib::L2CValue::~L2CValue(aLStack64);
          }
        }
      }
    }
  }
  return;
}

