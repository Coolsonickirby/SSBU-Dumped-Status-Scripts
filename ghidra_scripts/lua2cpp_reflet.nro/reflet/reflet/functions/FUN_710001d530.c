
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001d530(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this;
  float fVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = aLStack144;
  iVar3 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_HIT);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_MOVE);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) goto LAB_710001d780;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_STATUS_FINAL_FLAG_CHANGE_STATUS);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_710001d780;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_READY);
    lib::L2CValue::L2CValue(aLStack96,false);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_REFLET_STATUS_FINAL_FLAG_GOTO_MOVE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_710001d780;
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_STATUS_FINAL_WORK_FLOAT_MOVE_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar5);
    lib::L2CValue::L2CValue(aLStack64,1.0);
    uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) goto LAB_710001d780;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_KIND_FINAL_MOVE);
    lib::L2CValue::L2CValue(aLStack96,false);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    this = aLStack128;
  }
  lib::L2CValue::~L2CValue(this);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_710001d780:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

