
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100027250(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  L2CValue *this;
  ulong uVar3;
  L2CValue *this_00;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = aLStack80;
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),8);
  lib::L2CValue::operator!(this);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar3 = lib::L2CValue::operator==(param_3,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) goto LAB_71000272fc;
    lib::L2CValue::L2CValue
              (aLStack64,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_MOVE_TIME_COUNTER);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    this_00 = aLStack64;
  }
  lib::L2CValue::~L2CValue(this_00);
LAB_71000272fc:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

