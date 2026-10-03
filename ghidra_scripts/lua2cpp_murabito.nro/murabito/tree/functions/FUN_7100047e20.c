
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100047e20(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_MURABITO_TREE_INSTANCE_WORK_ID_FLAG_CRACK);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_EFFECT_EFFECT);
    lib::L2CValue::L2CValue(aLStack128,0xe7bdd448c);
    lib::L2CValue::L2CValue(aLStack160,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,10.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,1.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,true);
    FUN_7100002eb0(aLStack144,param_2,aLStack80,aLStack128,aLStack160,aLStack176,aLStack192,
                   aLStack208,aLStack224,aLStack240,aLStack256,aLStack272,aLStack288,aLStack304,
                   aLStack320,aLStack336,aLStack352,aLStack368,aLStack384);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_TREE_INSTANCE_WORK_ID_FLAG_CRACK);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator.cast.to.bool(param_3);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_TREE_STATUS_STAND_WORK_FLAG_HIT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_MURABITO_TREE_INSTANCE_WORK_ID_INT_CRACK_LEFT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::operator=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_MURABITO_TREE_INSTANCE_WORK_ID_INT_CRACK_RIGHT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack80,2);
  uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,2);
    uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar4 = lib::L2CValue::operator<(aLStack80,aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
LAB_7100048404:
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar4 = lib::L2CValue::operator<(aLStack80,aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,0x60cf52aab);
          lib::L2CValue::L2CValue(aLStack128,0xaa91a4058);
          lVar5 = lib::L2CValue::as_integer(aLStack80);
          lVar6 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::VisibilityModule__set_int64_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),lVar5,lVar6);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar4 = lib::L2CValue::operator<(aLStack80,aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,0x635294940);
          lib::L2CValue::L2CValue(aLStack128,0xa907df103);
          lVar5 = lib::L2CValue::as_integer(aLStack80);
          lVar6 = lib::L2CValue::as_integer(aLStack128);
          app::lua_bind::VisibilityModule__set_int64_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),lVar5,lVar6);
          goto LAB_71000484fc;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar4 = lib::L2CValue::operator<(aLStack80,aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) goto LAB_7100048404;
        lib::L2CValue::L2CValue(aLStack80,0x6fda3987e);
        lib::L2CValue::L2CValue(aLStack128,0x978e63c4f);
        lVar5 = lib::L2CValue::as_integer(aLStack80);
        lVar6 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::VisibilityModule__set_int64_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),lVar5,lVar6);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x60cf52aab);
        lib::L2CValue::L2CValue(aLStack128,0xaa91a4058);
        lVar5 = lib::L2CValue::as_integer(aLStack80);
        lVar6 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::VisibilityModule__set_int64_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),lVar5,lVar6);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x635294940);
        lib::L2CValue::L2CValue(aLStack128,0xa907df103);
        lVar5 = lib::L2CValue::as_integer(aLStack80);
        lVar6 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::VisibilityModule__set_int64_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),lVar5,lVar6);
LAB_71000484fc:
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(param_1,0);
      goto LAB_7100048518;
    }
  }
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator==(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(param_1,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,2);
    uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_MURABITO_TREE_INSTANCE_WORK_ID_FLAG_CRACK_LEFT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack400,_WEAPON_MURABITO_TREE_STATUS_KIND_FALLEN);
    lib::L2CValue::L2CValue(aLStack416,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::L2CValue(param_1,1);
  }
LAB_7100048518:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

