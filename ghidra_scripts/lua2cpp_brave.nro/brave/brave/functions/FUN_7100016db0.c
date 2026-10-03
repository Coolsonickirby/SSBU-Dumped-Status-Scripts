
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016db0(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  L2CValue *this;
  Fighter *pFVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLOAT_SP);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLOAT_MAX_SP);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,param_2);
  lib::L2CValue::L2CValue(aLStack128,param_3);
  FUN_710001a230(aLStack96,param_1,aLStack112,aLStack128);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar1 & 1U) != 0) {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),4);
    lib::L2CValue::operator-(param_2);
    pFVar3 = (Fighter *)lib::L2CValue::as_pointer(this);
    fVar4 = (float)lib::L2CValue::as_number(aLStack96);
    app::FighterSpecializer_Brave::add_sp(pFVar3,fVar4);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

