
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100031280(long param_1,L2CValue *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_WORK_INT_COMBO);
  iVar2 = lib::L2CValue::as_integer(param_2);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_ATTACK_FLAG_ENABLE_COMBO);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_ATTACK_COMBO_WORK_INT_NEXT_STATUS);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,2);
  uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,3);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,4);
      uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,5);
        uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,6);
          uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,7);
            uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar4 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,8);
              uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              if ((uVar4 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack80,0xa43fad13f);
                lib::L2CValue::operator=(aLStack96,aLStack80);
              }
              else {
                lib::L2CValue::L2CValue(aLStack80,0x99289ad4c);
                lib::L2CValue::operator=(aLStack96,aLStack80);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack80,0x9e58e9dda);
              lib::L2CValue::operator=(aLStack96,aLStack80);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,0x97531804b);
            lib::L2CValue::operator=(aLStack96,aLStack80);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0x90236b0dd);
          lib::L2CValue::operator=(aLStack96,aLStack80);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x99b3fe167);
        lib::L2CValue::operator=(aLStack96,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x9ec38d1f1);
      lib::L2CValue::operator=(aLStack96,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x9725c4452);
    lib::L2CValue::operator=(aLStack96,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  fVar6 = (float)lib::L2CValue::as_number(aLStack80);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar6,fVar7,(bool)(bVar1 & 1),
             0.0,false,false);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

