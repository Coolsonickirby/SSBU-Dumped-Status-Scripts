
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002f2f0(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,param_3);
  lua2cpp::L2CFighterCommon::attack_air_uniq(param_2,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x20);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
    lib::L2CValue::operator&(pLVar4,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar1 & 1U) == 0) {
      pLVar4 = aLStack112;
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_F_FLAG_ENABLE_COMBO);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_710002f434;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_F_FLAG_CONNECT_COMBO);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
      pLVar4 = aLStack64;
    }
    lib::L2CValue::~L2CValue(pLVar4);
  }
LAB_710002f434:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

