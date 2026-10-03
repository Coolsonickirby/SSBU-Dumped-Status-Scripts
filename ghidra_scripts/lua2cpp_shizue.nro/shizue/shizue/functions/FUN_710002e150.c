
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002e150(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar6 = (L2CValue *)(param_1 + 200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_CATCH);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_CATCH_PULL);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_CATCH_DASH);
      uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_CATCH_DASH_PULL);
        uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
          lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_CATCH_TURN);
          uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar5 & 1) == 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
            lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_CATCH_WAIT);
            uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar5 & 1) == 0) {
              pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
              lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_CATCH_ATTACK);
              uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              if ((uVar5 & 1) == 0) {
                pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_CATCH_JUMP);
                uVar5 = lib::L2CValue::operator==(pLVar4,aLStack64);
                lib::L2CValue::~L2CValue(aLStack64);
                if ((uVar5 & 1) == 0) {
                  pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
                  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_THROW);
                  uVar5 = lib::L2CValue::operator==(pLVar6,aLStack64);
                  lib::L2CValue::~L2CValue(aLStack64);
                  if ((uVar5 & 1) == 0) {
                    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SHIZUE_GENERATE_ARTICLE_BUTTERFLYNET)
                    ;
                    iVar3 = lib::L2CValue::as_integer(aLStack64);
                    app::lua_bind::ArticleModule__remove_exist_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,0);
                    lib::L2CValue::~L2CValue(aLStack64);
                  }
                  lib::L2CValue::L2CValue
                            (aLStack80,_FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_CATCHING);
                  iVar3 = lib::L2CValue::as_integer(aLStack80);
                  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
                  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
                  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
                  lib::L2CValue::~L2CValue(aLStack64);
                  lib::L2CValue::~L2CValue(aLStack80);
                  if ((bVar2 & 1U) != 0) {
                    lib::L2CValue::L2CValue(aLStack64,0x54f934137);
                    HVar7 = lib::L2CValue::as_hash(aLStack64);
                    bVar1 = app::lua_bind::MotionModule__clear_joint_srt_impl
                                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar7);
                    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
                    lib::L2CValue::~L2CValue(aLStack96);
                    lib::L2CValue::~L2CValue(aLStack64);
                    lib::L2CValue::L2CValue
                              (aLStack64,_FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_CATCHING);
                    iVar3 = lib::L2CValue::as_integer(aLStack64);
                    app::lua_bind::WorkModule__off_flag_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
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
  return;
}

