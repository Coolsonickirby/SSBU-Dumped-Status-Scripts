
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000744a0(long param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar2);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ATTACK);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ATTACK_S3);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ATTACK_HI3);
      uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_ATTACK_S4_START);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_ATTACK_AIR);
          uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_N);
            uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_SPECIAL_S);
              uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              if ((uVar3 & 1) == 0) goto LAB_710007461c;
            }
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack64,_FS_SUCCEEDS_KEEP_TRANSITION);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::StatusModule__set_succeeds_bit_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_710007461c:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

