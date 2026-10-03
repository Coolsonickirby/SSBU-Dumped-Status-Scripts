
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100011310(long param_1,L2CValue *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *this;
  BattleObjectModuleAccessor **ppBVar4;
  float fVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
  uVar2 = lib::L2CValue::operator==(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
    uVar2 = lib::L2CValue::operator==(param_2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
      fVar5 = (float)lib::L2CValue::as_number(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar5,iVar1);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_FALL_X_MAX_MUL);
      fVar5 = (float)lib::L2CValue::as_number(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar5,iVar1);
      lib::L2CValue::~L2CValue(aLStack96);
      goto LAB_7100011588;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack112,0xd07d69a9b);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  ppBVar4 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar4,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar4,fVar5,iVar1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack112,0xa4e6eeca8);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar4,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLOAT_FALL_X_MAX_MUL);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar4,fVar5,iVar1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_LANDING_CANCEL);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar4,iVar1);
LAB_7100011588:
  lib::L2CValue::~L2CValue(aLStack80);
  iVar1 = app::lua_bind::StatusModule__situation_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ATTACH_WALL);
    uVar2 = lib::L2CValue::operator==(param_2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_LANDING_CANCEL);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    this = aLStack80;
  }
  else {
    this = aLStack96;
  }
  lib::L2CValue::~L2CValue(this);
  return;
}

