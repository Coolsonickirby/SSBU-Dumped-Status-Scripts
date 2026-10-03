
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001dbe0(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *this;
  float fVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = aLStack160;
  iVar2 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_FINAL);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PURIN_STATUS_KIND_FINAL_WAIT);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) goto LAB_710001de90;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_COUNT_COMMON);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack128,0x10e61619ff);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    uVar3 = lib::L2CValue::operator<=(aLStack96,aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_KIND_FINAL_END);
      lib::L2CValue::L2CValue(aLStack128,false);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
      goto LAB_710001de6c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_FINAL_WORK_FLOAT_COUNT_COMMON);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack128,0x147676c29f);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    uVar3 = lib::L2CValue::operator<=(aLStack96,aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_KIND_FINAL_WAIT);
      lib::L2CValue::L2CValue(aLStack128,false);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      this = aLStack144;
LAB_710001de6c:
      lib::L2CValue::~L2CValue(this);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_710001de90:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

