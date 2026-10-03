
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100048a30(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_PACMAN_TRAMPOLINE_INSTANCE_WORK_FLAG_AREA_BODY);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    this = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_PACMAN_TRAMPOLINE_INSTANCE_WORK_INT_AREA_BODY_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar3 = lib::L2CValue::operator<=(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PACMAN_TRAMPOLINE_AREA_KIND_OWNER);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::AreaModule__enable_area_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,true,-1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PACMAN_TRAMPOLINE_AREA_KIND_BODY);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::AreaModule__enable_area_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,true,-1);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PACMAN_TRAMPOLINE_INSTANCE_WORK_FLAG_AREA_BODY);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    this = aLStack64;
  }
  lib::L2CValue::~L2CValue(this);
  return;
}

