
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100014130(long param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  pLVar4 = (L2CValue *)(param_1 + 200);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_STATUS_KIND_SPECIAL_HI_RUSH);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_STATUS_KIND_SPECIAL_HI_BOUND);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) goto LAB_7100014478;
  }
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_CLIFF_CATCH_MOVE);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_CLIFF_CATCH);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar4,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar3 = lib::L2CValue::operator==(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack144,0x12ccbda62b);
        uVar3 = lib::L2CValue::as_integer(aLStack128);
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar5);
        lib::L2CValue::L2CValue(aLStack80,iVar1);
        lib::L2CValue::operator=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        lib::L2CValue::operator+(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        lib::L2CValue::operator+(aLStack144,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
        fVar6 = (float)lib::L2CValue::as_number(aLStack128);
        iVar1 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar1);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::L2CValue(aLStack128,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack144,0xfb9679d74);
        uVar3 = lib::L2CValue::as_integer(aLStack128);
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar5);
        lib::L2CValue::L2CValue(aLStack80,fVar6);
        lib::L2CValue::operator=(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        lib::L2CValue::operator+(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLOAT_FALL_X_MAX_MUL);
        fVar6 = (float)lib::L2CValue::as_number(aLStack128);
        iVar1 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar1);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack128);
      }
    }
  }
LAB_7100014478:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

