
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003dce0(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_ALL);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar4);
    lib::L2CValue::L2CValue(aLStack112,iVar4);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar5 = lib::L2CValue::operator<=(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      bVar2 = false;
      goto LAB_710003de14;
    }
  }
  else {
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack144,param_3);
  lib::L2CValue::L2CValue(aLStack160,false);
  lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  bVar2 = true;
LAB_710003de14:
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

