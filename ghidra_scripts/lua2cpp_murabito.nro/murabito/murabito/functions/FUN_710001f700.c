
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001f700(L2CValue *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar5 = (L2CValue *)(param_2 + 200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_HI_WAIT);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_HI_FLAP);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      FUN_710001fac0(param_2,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
    }
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_HI_WAIT);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_HI_FLAP);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_HI_TURN);
      uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_HI_LANDING);
        uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_HI_END);
          uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_HI_DETACH);
            uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar4 & 1) == 0) {
              pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
              lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_CLIFF_CATCH_MOVE);
              uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              if ((uVar4 & 1) == 0) {
                FUN_710001ee10(aLStack80,param_2);
                lib::L2CValue::L2CValue(aLStack112,_WEAPON_MURABITO_BALLOON_STATUS_KIND_BURST);
                iVar1 = lib::L2CValue::as_integer(aLStack80);
                iVar2 = lib::L2CValue::as_integer(aLStack112);
                app::lua_bind::ArticleModule__change_status_exist_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1,iVar2);
              }
              else {
                FUN_710001ee10(aLStack80,param_2);
                lib::L2CValue::L2CValue(aLStack112,_WEAPON_MURABITO_BALLOON_STATUS_KIND_DETACH);
                iVar1 = lib::L2CValue::as_integer(aLStack80);
                iVar2 = lib::L2CValue::as_integer(aLStack112);
                app::lua_bind::ArticleModule__change_status_exist_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1,iVar2);
              }
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::~L2CValue(aLStack80);
              pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_NONE);
              uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              if ((uVar4 & 1) == 0) {
                FUN_710001e640(param_2);
              }
              iVar1 = 1;
              goto LAB_710001f934;
            }
          }
        }
      }
    }
  }
  iVar1 = 0;
LAB_710001f934:
  lib::L2CValue::L2CValue(param_1,iVar1);
  return;
}

