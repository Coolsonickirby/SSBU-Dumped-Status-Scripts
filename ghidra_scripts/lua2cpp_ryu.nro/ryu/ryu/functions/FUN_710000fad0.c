
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000fad0(long param_1,L2CValue *param_2)

{
  ulong uVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  float fVar4;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,param_2);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_FINAL_CAMERA_OFFSET_1);
  uVar1 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_FINAL_CAMERA_OFFSET_2);
    uVar1 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack112,0x166fad7ace);
      uVar1 = lib::L2CValue::as_integer(aLStack64);
      uVar2 = lib::L2CValue::as_integer(aLStack112);
      fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,uVar2);
      lib::L2CValue::L2CValue(aLStack176,fVar4);
      lib::L2CValue::L2CValue(aLStack144,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack160,0x1618aa4a58);
      uVar1 = lib::L2CValue::as_integer(aLStack144);
      uVar2 = lib::L2CValue::as_integer(aLStack160);
      fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,uVar2);
      lib::L2CValue::L2CValue(aLStack192,fVar4);
      FUN_710000fff0(param_1,aLStack176,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      pLVar3 = aLStack176;
      goto LAB_710000fe00;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_FINAL_CAMERA_OFFSET_3);
    uVar1 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack112,0x166e6f10f9);
      uVar1 = lib::L2CValue::as_integer(aLStack64);
      uVar2 = lib::L2CValue::as_integer(aLStack112);
      fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,uVar2);
      lib::L2CValue::L2CValue(aLStack208,fVar4);
      lib::L2CValue::L2CValue(aLStack144,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack160,0x161968206f);
      uVar1 = lib::L2CValue::as_integer(aLStack144);
      uVar2 = lib::L2CValue::as_integer(aLStack160);
      fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,uVar2);
      lib::L2CValue::L2CValue(aLStack224,fVar4);
      FUN_710000fff0(param_1,aLStack208,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      pLVar3 = aLStack208;
      goto LAB_710000fe00;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_FINAL_CAMERA_OFFSET_RETURN);
    uVar1 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) goto LAB_710000fe14;
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    FUN_710000fff0(param_1,aLStack240,aLStack256);
    lib::L2CValue::~L2CValue(aLStack256);
    pLVar3 = aLStack240;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack112,0x15673eff09);
    uVar1 = lib::L2CValue::as_integer(aLStack64);
    uVar2 = lib::L2CValue::as_integer(aLStack112);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,uVar2);
    lib::L2CValue::L2CValue(aLStack96,fVar4);
    lib::L2CValue::L2CValue(aLStack144,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack160,0x151039cf9f);
    uVar1 = lib::L2CValue::as_integer(aLStack144);
    uVar2 = lib::L2CValue::as_integer(aLStack160);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,uVar2);
    lib::L2CValue::L2CValue(aLStack128,fVar4);
    FUN_710000fff0(param_1,aLStack96,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    pLVar3 = aLStack96;
LAB_710000fe00:
    lib::L2CValue::~L2CValue(pLVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar3 = aLStack64;
  }
  lib::L2CValue::~L2CValue(pLVar3);
LAB_710000fe14:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

