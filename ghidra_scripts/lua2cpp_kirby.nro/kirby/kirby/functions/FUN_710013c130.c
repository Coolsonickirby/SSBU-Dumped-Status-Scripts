
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710013c130(long param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue aLStack64 [16];
  
  pLVar4 = (L2CValue *)(param_1 + 200);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_MASTER_SPECIAL_N_TURN);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_MASTER_SPECIAL_N_HOLD);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_MASTER_SPECIAL_N_SHOOT);
      uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_MASTER_SPECIAL_N_MAX_SHOOT);
        uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) == 0) {
          pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_MASTER_SPECIAL_N_CANCEL);
          uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar3 & 1) == 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
            lib::L2CValue::L2CValue
                      (aLStack64,_FIGHTER_KIRBY_STATUS_KIND_MASTER_SPECIAL_N_JUMP_CANCEL);
            uVar3 = lib::L2CValue::operator==(pLVar4,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MASTER_GENERATE_ARTICLE_BOW);
              iVar1 = lib::L2CValue::as_integer(aLStack64);
              app::lua_bind::ArticleModule__remove_exist_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MASTER_GENERATE_ARTICLE_ARROW1);
              iVar1 = lib::L2CValue::as_integer(aLStack64);
              app::lua_bind::ArticleModule__remove_exist_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
              lib::L2CValue::~L2CValue(aLStack64);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MASTER_GENERATE_ARTICLE_ARROW2);
              iVar1 = lib::L2CValue::as_integer(aLStack64);
              app::lua_bind::ArticleModule__remove_exist_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,0);
              lib::L2CValue::~L2CValue(aLStack64);
            }
          }
        }
      }
    }
  }
  return;
}

