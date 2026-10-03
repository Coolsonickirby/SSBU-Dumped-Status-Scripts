
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000642c0(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar4 = aLStack128;
  lib::L2CValue::L2CValue(aLStack96,param_3);
  lua2cpp::L2CFighterCommon::sub_jump_aerial_uniq(param_2,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack64,1.0);
      uVar5 = lib::L2CValue::operator<(aLStack64,pLVar4);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) goto LAB_71000643e8;
      app::lua_bind::FighterControlModuleImpl__reserve_on_special_button_impl
                (param_2->moduleAccessor);
      lib::L2CValue::L2CValue
                (aLStack64,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_JUMP_MINI_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
      pLVar4 = aLStack64;
    }
    lib::L2CValue::~L2CValue(pLVar4);
  }
LAB_71000643e8:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

