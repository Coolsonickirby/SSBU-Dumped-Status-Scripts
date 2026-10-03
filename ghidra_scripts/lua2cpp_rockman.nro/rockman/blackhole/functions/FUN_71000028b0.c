
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000028b0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROCKMAN_BLACKHOLE_STATUS_WORK_FLAG_FINAL_SUCCESS);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    bVar2 = lib::L2CValue::operator.cast.to.bool(param_3);
    if ((bVar2 & 1U) == 0) goto LAB_71000029c0;
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x14);
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::operator=(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x15);
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::operator=(pLVar4,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
LAB_71000029c0:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

