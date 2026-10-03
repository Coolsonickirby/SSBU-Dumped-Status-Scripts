
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001b2a0(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ArticleOperationTarget AVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Fighter *pFVar8;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar7 = (L2CValue *)(param_1 + 200);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_WAIT);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_WALK_F);
    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_WALK_BRAKE_F);
      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_WALK_B);
        uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar6 & 1) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_WALK_BRAKE_B);
          uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar6 & 1) == 0) {
            pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_DASH_F);
            uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar6 & 1) == 0) {
              pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_DASH_B);
              uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              if ((uVar6 & 1) == 0) {
                pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
                lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_JUMP);
                uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
                lib::L2CValue::~L2CValue(aLStack64);
                if ((uVar6 & 1) == 0) {
                  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
                  lib::L2CValue::L2CValue
                            (aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_JUMP_AERIAL);
                  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
                  lib::L2CValue::~L2CValue(aLStack64);
                  if ((uVar6 & 1) == 0) {
                    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
                    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_AIR)
                    ;
                    uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
                    lib::L2CValue::~L2CValue(aLStack64);
                    if ((uVar6 & 1) == 0) {
                      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
                      lib::L2CValue::L2CValue
                                (aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_JUMP_SQUAT);
                      uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
                      lib::L2CValue::~L2CValue(aLStack64);
                      if ((uVar6 & 1) == 0) {
                        pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
                        lib::L2CValue::L2CValue
                                  (aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_HOLD_LANDING);
                        uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
                        lib::L2CValue::~L2CValue(aLStack64);
                        if ((uVar6 & 1) == 0) {
                          pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0xb);
                          lib::L2CValue::L2CValue
                                    (aLStack64,_FIGHTER_SNAKE_STATUS_KIND_SPECIAL_N_THROW);
                          uVar6 = lib::L2CValue::operator==(pLVar5,aLStack64);
                          lib::L2CValue::~L2CValue(aLStack64);
                          if ((uVar6 & 1) == 0) {
                            pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,4);
                            lib::L2CValue::L2CValue
                                      (aLStack80,_FIGHTER_SNAKE_GENERATE_ARTICLE_GRENADE);
                            lib::L2CValue::L2CValue(aLStack96,_ARTICLE_OPE_TARGET_LAST);
                            pFVar8 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
                            iVar3 = lib::L2CValue::as_integer(aLStack80);
                            AVar4 = lib::L2CValue::as_integer(aLStack96);
                            bVar1 = app::FighterSpecializer_Snake::is_constraint_article
                                              (pFVar8,iVar3,AVar4);
                            lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
                            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
                            lib::L2CValue::~L2CValue(aLStack64);
                            lib::L2CValue::~L2CValue(aLStack96);
                            lib::L2CValue::~L2CValue(aLStack80);
                            if ((bVar2 & 1U) != 0) {
                              lib::L2CValue::L2CValue
                                        (aLStack64,_FIGHTER_SNAKE_GENERATE_ARTICLE_GRENADE);
                              lib::L2CValue::L2CValue(aLStack80,_ARTICLE_OPE_TARGET_LAST);
                              lib::L2CValue::L2CValue(aLStack96,false);
                              iVar3 = lib::L2CValue::as_integer(aLStack64);
                              AVar4 = lib::L2CValue::as_integer(aLStack80);
                              bVar1 = lib::L2CValue::as_bool(aLStack96);
                              app::lua_bind::ArticleModule__shoot_exist_impl
                                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,
                                         AVar4,(bool)(bVar1 & 1));
                              lib::L2CValue::~L2CValue(aLStack96);
                              lib::L2CValue::~L2CValue(aLStack80);
                              lib::L2CValue::~L2CValue(aLStack64);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

