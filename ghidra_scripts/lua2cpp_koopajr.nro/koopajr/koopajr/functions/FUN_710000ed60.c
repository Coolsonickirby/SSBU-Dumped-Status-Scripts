
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000ed60(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_INTERRUPT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)(param_1 + 200);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_EXTERN_HEAD);
    uVar5 = lib::L2CValue::operator<=(pLVar4,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FALL);
      uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING);
        uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_LIGHT);
          uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar5 & 1) == 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_DAMAGE_LIGHT);
            uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar5 & 1) == 0) {
              pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
              lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ESCAPE_AIR);
              uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              if ((uVar5 & 1) == 0) {
                pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_ATTACK_AIR);
                uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                lib::L2CValue::~L2CValue(aLStack64);
                if ((uVar5 & 1) == 0) {
                  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_DAMAGE_AIR);
                  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                  lib::L2CValue::~L2CValue(aLStack64);
                  if ((uVar5 & 1) == 0) {
                    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_DAMAGE_FLY);
                    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                    lib::L2CValue::~L2CValue(aLStack64);
                    if ((uVar5 & 1) == 0) {
                      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_DAMAGE_FLY_ROLL);
                      uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                      lib::L2CValue::~L2CValue(aLStack64);
                      if ((uVar5 & 1) == 0) {
                        pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_DAMAGE_FLY_METEOR);
                        uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                        lib::L2CValue::~L2CValue(aLStack64);
                        if ((uVar5 & 1) == 0) {
                          pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                          lib::L2CValue::L2CValue
                                    (aLStack64,_FIGHTER_STATUS_KIND_DAMAGE_FLY_REFLECT_LR);
                          uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                          lib::L2CValue::~L2CValue(aLStack64);
                          if ((uVar5 & 1) == 0) {
                            pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                            lib::L2CValue::L2CValue
                                      (aLStack64,_FIGHTER_STATUS_KIND_DAMAGE_FLY_REFLECT_U);
                            uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                            lib::L2CValue::~L2CValue(aLStack64);
                            if ((uVar5 & 1) == 0) {
                              pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                              lib::L2CValue::L2CValue
                                        (aLStack64,_FIGHTER_STATUS_KIND_DAMAGE_FLY_REFLECT_D);
                              uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                              lib::L2CValue::~L2CValue(aLStack64);
                              if ((uVar5 & 1) == 0) {
                                pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                                lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_DAMAGE_FALL);
                                uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                                lib::L2CValue::~L2CValue(aLStack64);
                                if ((uVar5 & 1) == 0) {
                                  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                                  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_DOWN);
                                  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                                  lib::L2CValue::~L2CValue(aLStack64);
                                  if ((uVar5 & 1) == 0) {
                                    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                                    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_PASSIVE);
                                    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                                    lib::L2CValue::~L2CValue(aLStack64);
                                    if ((uVar5 & 1) == 0) {
                                      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                                      lib::L2CValue::L2CValue
                                                (aLStack64,_FIGHTER_STATUS_KIND_PASSIVE_FB);
                                      uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                                      lib::L2CValue::~L2CValue(aLStack64);
                                      if ((uVar5 & 1) == 0) {
                                        pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                                        lib::L2CValue::L2CValue
                                                  (aLStack64,_FIGHTER_STATUS_KIND_PASSIVE_WALL);
                                        uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                                        lib::L2CValue::~L2CValue(aLStack64);
                                        if ((uVar5 & 1) == 0) {
                                          pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb)
                                          ;
                                          lib::L2CValue::L2CValue
                                                    (aLStack64,_FIGHTER_STATUS_KIND_PASSIVE_CEIL);
                                          uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                                          lib::L2CValue::~L2CValue(aLStack64);
                                          if ((uVar5 & 1) == 0) {
                                            pLVar4 = (L2CValue *)
                                                     lib::L2CValue::operator[](pLVar6,0xb);
                                            lib::L2CValue::L2CValue
                                                      (aLStack64,
                                                       FIGHTER_STATUS_KIND_CLIFF_CATCH_MOVE);
                                            uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                                            lib::L2CValue::~L2CValue(aLStack64);
                                            if ((uVar5 & 1) == 0) {
                                              pLVar4 = (L2CValue *)
                                                       lib::L2CValue::operator[](pLVar6,0xb);
                                              lib::L2CValue::L2CValue
                                                        (aLStack64,
                                                         _FIGHTER_STATUS_KIND_SAVING_DAMAGE_FLY);
                                              uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                                              lib::L2CValue::~L2CValue(aLStack64);
                                              if ((uVar5 & 1) == 0) {
                                                pLVar4 = (L2CValue *)
                                                         lib::L2CValue::operator[](pLVar6,0xb);
                                                lib::L2CValue::L2CValue
                                                          (aLStack64,
                                                           _FIGHTER_STATUS_KIND_SAVING_DAMAGE_AIR);
                                                uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                                                lib::L2CValue::~L2CValue(aLStack64);
                                                if ((uVar5 & 1) == 0) {
                                                  pLVar4 = (L2CValue *)
                                                           lib::L2CValue::operator[](pLVar6,0xb);
                                                  lib::L2CValue::L2CValue
                                                            (aLStack64,
                                                             _FIGHTER_STATUS_KIND_CAPTURE_BLACKHOLE)
                                                  ;
                                                  uVar5 = lib::L2CValue::operator==
                                                                    (pLVar4,aLStack64);
                                                  lib::L2CValue::~L2CValue(aLStack64);
                                                  if ((uVar5 & 1) == 0) {
                                                    pLVar6 = (L2CValue *)
                                                             lib::L2CValue::operator[](pLVar6,0xb);
                                                    lib::L2CValue::L2CValue
                                                              (aLStack64,
                                                               _FIGHTER_STATUS_KIND_TRAIL_REBOUND);
                                                    uVar5 = lib::L2CValue::operator==
                                                                      (pLVar6,aLStack64);
                                                    lib::L2CValue::~L2CValue(aLStack64);
                                                    lib::L2CValue::~L2CValue(aLStack80);
                                                    lib::L2CValue::~L2CValue(aLStack96);
                                                    if ((uVar5 & 1) != 0) {
                                                      return;
                                                    }
                                                    FUN_710000f410(param_1);
                                                    return;
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
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

