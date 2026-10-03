
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100048870(L2CValue *param_1,void *param_2)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar2 = lib::L2CValue::operator<=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_TRAMPOLINE_INSTANCE_WORK_INT_RIDER_NUM);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    iVar1 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar2 = lib::L2CValue::operator<=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACMAN_TRAMPOLINE_STATUS_KIND_REMOVE);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      bVar3 = true;
      goto LAB_71000489b0;
    }
  }
  bVar3 = false;
LAB_71000489b0:
  lib::L2CValue::L2CValue(param_1,bVar3);
  return;
}

