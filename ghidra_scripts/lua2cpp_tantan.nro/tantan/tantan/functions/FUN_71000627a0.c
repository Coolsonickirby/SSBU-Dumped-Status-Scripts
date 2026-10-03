
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000627a0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  lVar3 = app::lua_bind::WorkModule__get_int64_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,lVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
    lib::L2CValue::operator=(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_L);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    lib::L2CValue::operator=(aLStack128,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_L);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator==(aLStack144,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar4 = lib::L2CValue::operator==(aLStack128,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x19270268d6);
        lib::L2CValue::operator=(aLStack112,aLStack64);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0x1a1e299a70);
        lib::L2CValue::operator=(aLStack112,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar4 = lib::L2CValue::operator==(aLStack128,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x18c7e41a2b);
        lib::L2CValue::operator=(aLStack112,aLStack64);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0x19ddc5f2a3);
        lib::L2CValue::operator=(aLStack112,aLStack64);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    lVar3 = app::lua_bind::WorkModule__get_int64_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack64,lVar3);
    lib::L2CValue::operator=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
    lib::L2CValue::operator=(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_BEHIND_R);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    lib::L2CValue::operator=(aLStack128,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_R);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator==(aLStack144,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar4 = lib::L2CValue::operator==(aLStack128,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x19dd0d55b5);
        lib::L2CValue::operator=(aLStack112,aLStack64);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0x1aca68a5af);
        lib::L2CValue::operator=(aLStack112,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar4 = lib::L2CValue::operator==(aLStack128,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x183deb2748);
        lib::L2CValue::operator=(aLStack112,aLStack64);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0x190984cd7c);
        lib::L2CValue::operator=(aLStack112,aLStack64);
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(param_1,aLStack80);
  lib::L2CValue::L2CValue(param_1 + 0x10,aLStack96);
  lib::L2CValue::L2CValue(param_1 + 0x20,aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

