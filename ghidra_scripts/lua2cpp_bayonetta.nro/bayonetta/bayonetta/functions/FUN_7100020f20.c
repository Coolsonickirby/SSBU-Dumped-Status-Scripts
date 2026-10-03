
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020f20(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_WORK_ID_BATWITHIN_INT_STATUS_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ESCAPE);
  uVar2 = lib::L2CValue::operator==(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_ESCAPE_F);
    uVar2 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ESCAPE_B);
      uVar2 = lib::L2CValue::operator==(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_ESCAPE_AIR);
        uVar2 = lib::L2CValue::operator==(aLStack112,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar2 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack144,0x91ef89863);
          uVar2 = lib::L2CValue::as_integer(aLStack128);
          uVar3 = lib::L2CValue::as_integer(aLStack144);
          fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
          lib::L2CValue::L2CValue(aLStack64,fVar4);
          lib::L2CValue::operator=(aLStack80,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack144,0xdf6a69a22);
          uVar2 = lib::L2CValue::as_integer(aLStack128);
          uVar3 = lib::L2CValue::as_integer(aLStack144);
          fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
          lib::L2CValue::L2CValue(aLStack64,fVar4);
          lib::L2CValue::operator=(aLStack96,aLStack64);
        }
        else {
          lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
          lib::L2CValue::L2CValue(aLStack144,0x14535b3acb);
          uVar2 = lib::L2CValue::as_integer(aLStack128);
          uVar3 = lib::L2CValue::as_integer(aLStack144);
          fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
          lib::L2CValue::L2CValue(aLStack64,fVar4);
          lib::L2CValue::operator=(aLStack80,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
          lib::L2CValue::L2CValue(aLStack144,0x1829c2f0c1);
          uVar2 = lib::L2CValue::as_integer(aLStack128);
          uVar3 = lib::L2CValue::as_integer(aLStack144);
          fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
          lib::L2CValue::L2CValue(aLStack64,fVar4);
          lib::L2CValue::operator=(aLStack96,aLStack64);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack144,0x129f47a2cb);
        uVar2 = lib::L2CValue::as_integer(aLStack128);
        uVar3 = lib::L2CValue::as_integer(aLStack144);
        fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
        lib::L2CValue::L2CValue(aLStack64,fVar4);
        lib::L2CValue::operator=(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack144,0x16ae67ca4f);
        uVar2 = lib::L2CValue::as_integer(aLStack128);
        uVar3 = lib::L2CValue::as_integer(aLStack144);
        fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
        lib::L2CValue::L2CValue(aLStack64,fVar4);
        lib::L2CValue::operator=(aLStack96,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack144,0x126b0886d8);
      uVar2 = lib::L2CValue::as_integer(aLStack128);
      uVar3 = lib::L2CValue::as_integer(aLStack144);
      fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
      lib::L2CValue::L2CValue(aLStack64,fVar4);
      lib::L2CValue::operator=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack144,0x161ebeb9cd);
      uVar2 = lib::L2CValue::as_integer(aLStack128);
      uVar3 = lib::L2CValue::as_integer(aLStack144);
      fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
      lib::L2CValue::L2CValue(aLStack64,fVar4);
      lib::L2CValue::operator=(aLStack96,aLStack64);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack144,0x10298325fe);
    uVar2 = lib::L2CValue::as_integer(aLStack128);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack64,fVar4);
    lib::L2CValue::operator=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack144,0x14007ccb2a);
    uVar2 = lib::L2CValue::as_integer(aLStack128);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack64,fVar4);
    lib::L2CValue::operator=(aLStack96,aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  fVar4 = (float)app::lua_bind::MotionModule__frame_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack160,fVar4);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  lib::L2CValue::operator+(aLStack160,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::operator-(aLStack96,aLStack144);
  lib::L2CValue::operator/(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

