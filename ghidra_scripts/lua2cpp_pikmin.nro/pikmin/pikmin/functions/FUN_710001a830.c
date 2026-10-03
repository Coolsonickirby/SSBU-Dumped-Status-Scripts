
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001a830(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    pLVar6 = (L2CValue *)(param_2 + 200);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1c);
    lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack112,0x1b85f59af1);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    uVar4 = lib::L2CValue::operator<=(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIKMIN_STATUS_SPECIAL_S_FLAG_FLICK_THROW);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x14);
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::operator=(pLVar3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x15);
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::operator=(pLVar6,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      iVar2 = 1;
      goto LAB_710001a99c;
    }
  }
  iVar2 = 0;
LAB_710001a99c:
  lib::L2CValue::L2CValue(param_1,iVar2);
  return;
}

