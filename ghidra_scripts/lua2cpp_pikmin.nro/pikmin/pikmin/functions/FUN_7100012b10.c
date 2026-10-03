
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100012b10(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *this;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  float fVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xe);
  lib::L2CValue::L2CValue(aLStack64,2.0);
  uVar5 = lib::L2CValue::operator<(this,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) != 0) {
    return;
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar5 = lib::L2CValue::operator<(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) goto LAB_7100012d3c;
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator==(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
LAB_7100012d2c:
    lib::L2CValue::~L2CValue(aLStack112);
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,pvVar6);
      }
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue(aLStack144,fVar8);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(pBVar7);
      lib::L2CValue::L2CValue(aLStack160,fVar8);
      lib::L2CValue::operator*(aLStack144,aLStack160);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar5 = lib::L2CValue::operator<(aLStack128,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar5 & 1) != 0) {
        app::lua_bind::PostureModule__reverse_lr_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
        app::lua_bind::PostureModule__update_rot_y_lr_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      }
      goto LAB_7100012d2c;
    }
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100012d3c:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

