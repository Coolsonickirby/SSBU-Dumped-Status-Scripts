
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000a3c0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CAgent *this;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROSETTA_STATUS_SPECIAL_HI_START_FLAG_REVERSE_LR);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROSETTA_STATUS_SPECIAL_HI_START_FLAG_REVERSE_LR);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      pLVar6 = (L2CValue *)0x1a;
      this = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x1a);
      lib::L2CAgent::math_abs(this,pLVar6);
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack112,0x12c755bcde);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar7);
      uVar4 = lib::L2CValue::operator<(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) != 0) {
        bVar2 = app::lua_bind::PostureModule__set_stick_lr_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),0.0);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
        lib::L2CValue::~L2CValue(aLStack128);
        app::lua_bind::PostureModule__update_rot_y_lr_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

