
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019150(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CAgent *this;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator==(param_3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DOLLY_STATUS_SPECIAL_HI_WORK_FLAG_REVERSE_LR);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DOLLY_STATUS_SPECIAL_HI_WORK_FLAG_REVERSE_LR);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::~L2CValue(aLStack64);
      pLVar5 = (L2CValue *)0x1a;
      this = (L2CAgent *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x1a);
      lib::L2CAgent::math_abs(this,pLVar5);
      lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack112,0xaadffd255);
      uVar3 = lib::L2CValue::as_integer(aLStack96);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      uVar3 = lib::L2CValue::operator<(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) != 0) {
        bVar1 = app::lua_bind::PostureModule__set_stick_lr_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),0.0);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue(aLStack128);
        app::lua_bind::PostureModule__update_rot_y_lr_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DOLLY_STATUS_SPECIAL_COMMON_WORK_INT_BUTTON_ON_TIMER)
    ;
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

