
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100044340(long param_1)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar5 = (L2CValue *)(param_1 + 200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_ATTACK);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_ATTACK_TURN);
      uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_STEP_F);
        uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_STEP_B);
          uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_MOTION_PART_SET_KIND_INK);
            lib::L2CValue::L2CValue(aLStack96,0.0);
            lib::L2CValue::L2CValue(aLStack112,true);
            iVar2 = lib::L2CValue::as_integer(aLStack80);
            fVar6 = (float)lib::L2CValue::as_number(aLStack96);
            bVar1 = lib::L2CValue::as_bool(aLStack112);
            app::lua_bind::MotionModule__set_frame_partial_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,fVar6,
                       (bool)(bVar1 & 1));
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack80);
          }
        }
      }
    }
  }
  return;
}

