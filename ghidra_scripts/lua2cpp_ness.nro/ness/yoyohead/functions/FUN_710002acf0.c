
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002acf0(long param_1,L2CValue *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_NESS_YOYO_HEAD_STATUS_WORK_FLAG_ROT_STOP);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_NESS_YOYO_HEAD_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_NESS_YOYO_HEAD_STATUS_WORK_FLOAT_ROT);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack112,fVar6);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_NESS_YOYO_HEAD_INSTANCE_WORK_ID_INT_ROT_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack128,iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,1);
      lib::L2CValue::operator+(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::operator=(aLStack128,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,0xe4771bd0f);
      lib::L2CValue::L2CValue(aLStack160,0x14ef1529be);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack80,iVar2);
      uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack160,0xe4771bd0f);
        lib::L2CValue::L2CValue(aLStack176,0xfdab54376);
        uVar4 = lib::L2CValue::as_integer(aLStack160);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack144,fVar6);
        lib::L2CValue::operator-(aLStack96,aLStack144);
        lib::L2CValue::operator=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar4 = lib::L2CValue::operator<(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,0.0);
          lib::L2CValue::operator=(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_NESS_YOYO_HEAD_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
        fVar6 = (float)lib::L2CValue::as_number(aLStack96);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_float_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar2);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::operator+(aLStack112,aLStack96);
      lib::L2CValue::operator=(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_NESS_YOYO_HEAD_STATUS_WORK_FLOAT_ROT);
      fVar6 = (float)lib::L2CValue::as_number(aLStack112);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_NESS_YOYO_HEAD_INSTANCE_WORK_ID_INT_ROT_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator==(param_2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xe4771bd0f);
      lib::L2CValue::L2CValue(aLStack128,0x10840034e4);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      uVar4 = lib::L2CValue::operator<(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0);
        iVar2 = lib::L2CValue::as_integer(aLStack128);
        bVar1 = app::lua_bind::AttackModule__is_attack_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,false);
        lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar4 & 1) != 0) {
          app::lua_bind::AttackModule__clear_all_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
        }
      }
    }
    lib::L2CValue::~L2CValue(aLStack96);
  }
  return;
}

