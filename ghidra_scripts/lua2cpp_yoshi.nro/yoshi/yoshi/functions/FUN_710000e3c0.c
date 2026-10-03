
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000e3c0(L2CValue *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_LIFE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar7);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack112,0x419cd3efe);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack128,0xb7223c66e);
  uVar3 = lib::L2CValue::as_integer(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::operator-(aLStack96,aLStack112);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar3 = lib::L2CValue::operator<(aLStack128,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,false);
    goto LAB_710000e6b4;
  }
  lib::L2CValue::operator-(aLStack96,aLStack112);
  uVar3 = lib::L2CValue::operator<(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
LAB_710000e6a8:
    lib::L2CValue::L2CValue(param_1,false);
    goto LAB_710000e6b4;
  }
  pLVar6 = (L2CValue *)(param_2 + 200);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x20);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_N);
  lib::L2CValue::operator&(pLVar5,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack128);
  if ((bVar1 & 1U) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x20);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S);
    lib::L2CValue::operator&(pLVar5,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    if ((bVar1 & 1U) != 0) {
LAB_710000e624:
      lib::L2CValue::~L2CValue(aLStack144);
      goto LAB_710000e62c;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x20);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_HI);
    lib::L2CValue::operator&(pLVar5,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack160);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::~L2CValue(aLStack160);
      goto LAB_710000e624;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x20);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_LW);
    lib::L2CValue::operator&(pLVar6,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar1 & 1U) == 0) goto LAB_710000e6a8;
  }
  else {
LAB_710000e62c:
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(param_1,true);
LAB_710000e6b4:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

