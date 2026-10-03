
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021330(L2CValue *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *this;
  float fVar9;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xcedec4cee);
  lib::L2CValue::L2CValue(aLStack80,0x13872e3fb0);
  uVar5 = lib::L2CValue::as_integer(aLStack64);
  uVar6 = lib::L2CValue::as_integer(aLStack80);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue(param_1,fVar9);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    this = aLStack96;
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_71000214e4;
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack64,(L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_HANG_FLOAT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,pvVar7);
    }
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack64);
    fVar9 = (float)app::lua_bind::PostureModule__scale_impl(pBVar8);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::operator*(param_1,aLStack112);
    lib::L2CValue::operator=(param_1,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    this = aLStack64;
  }
  lib::L2CValue::~L2CValue(this);
LAB_71000214e4:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

