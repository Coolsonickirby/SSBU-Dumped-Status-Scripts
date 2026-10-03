
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003bef0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong *puVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  L2CValue aLStack1360 [16];
  L2CValue aLStack1344 [16];
  L2CValue aLStack1328 [16];
  L2CValue aLStack1312 [16];
  L2CValue aLStack1296 [16];
  L2CValue aLStack1280 [16];
  L2CValue aLStack1264 [16];
  L2CValue aLStack1248 [16];
  L2CValue aLStack1232 [16];
  L2CValue aLStack1216 [16];
  L2CValue aLStack1200 [16];
  L2CValue aLStack1184 [16];
  L2CValue aLStack1168 [16];
  L2CValue aLStack1152 [16];
  L2CValue aLStack1136 [16];
  L2CValue aLStack1120 [16];
  L2CValue aLStack1104 [16];
  L2CValue aLStack1088 [16];
  L2CValue aLStack1072 [16];
  L2CValue aLStack1056 [16];
  L2CValue aLStack1040 [16];
  L2CValue aLStack1024 [16];
  ulong local_3f0;
  ulong uStack1000;
  L2CValue aLStack992 [24];
  L2CValue aLStack968 [16];
  L2CValue aLStack952 [16];
  L2CValue aLStack936 [16];
  L2CValue aLStack920 [16];
  L2CValue aLStack904 [16];
  L2CValue aLStack888 [16];
  L2CValue aLStack872 [16];
  L2CValue aLStack856 [16];
  L2CValue aLStack840 [16];
  L2CValue aLStack824 [16];
  L2CValue aLStack808 [16];
  L2CValue aLStack792 [16];
  L2CValue aLStack776 [16];
  L2CValue aLStack760 [16];
  L2CValue aLStack744 [16];
  L2CValue aLStack728 [16];
  L2CValue aLStack712 [16];
  L2CValue aLStack696 [16];
  L2CValue aLStack680 [16];
  L2CValue aLStack664 [16];
  undefined auStack648 [32];
  L2CValue aLStack616 [16];
  L2CValue aLStack600 [16];
  L2CValue aLStack584 [16];
  L2CValue aLStack568 [16];
  L2CValue aLStack552 [16];
  L2CValue aLStack536 [16];
  L2CValue aLStack520 [16];
  L2CValue aLStack504 [16];
  L2CValue aLStack488 [16];
  L2CValue aLStack472 [16];
  L2CValue aLStack456 [16];
  L2CValue aLStack440 [16];
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  undefined auStack184 [32];
  L2CValue aLStack152 [16];
  ulong auStack136 [3];
  
  lib::L2CValue::L2CValue(aLStack152,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack184 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack184,0);
  lib::L2CValue::L2CValue(aLStack200,0);
  lib::L2CValue::L2CValue(aLStack216,0);
  lib::L2CValue::L2CValue(aLStack232,0);
  lib::L2CValue::L2CValue(aLStack248,0);
  lib::L2CValue::L2CValue(aLStack264,0);
  lib::L2CValue::L2CValue(aLStack280,0);
  lib::L2CValue::L2CValue(aLStack296,0);
  lib::L2CValue::L2CValue(aLStack312,0);
  lib::L2CValue::L2CValue(aLStack328,0);
  lib::L2CValue::L2CValue(aLStack344,0);
  lib::L2CValue::L2CValue(aLStack360,0);
  lib::L2CValue::L2CValue(aLStack376,0);
  lib::L2CValue::L2CValue(aLStack392,0);
  lib::L2CValue::L2CValue(aLStack408,false);
  lib::L2CValue::L2CValue(aLStack424,0);
  lib::L2CValue::L2CValue(aLStack440,0);
  lib::L2CValue::L2CValue(aLStack456,0);
  lib::L2CValue::L2CValue(aLStack472,0);
  lib::L2CValue::L2CValue(aLStack488,0);
  lib::L2CValue::L2CValue(aLStack504,0);
  lib::L2CValue::L2CValue(aLStack520,0);
  lib::L2CValue::L2CValue(aLStack536,0);
  lib::L2CValue::L2CValue(aLStack552,0);
  lib::L2CValue::L2CValue(aLStack568,0);
  lib::L2CValue::L2CValue(aLStack584,0);
  lib::L2CValue::L2CValue(aLStack600,0);
  lib::L2CValue::L2CValue(aLStack616,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack648 + 0x10),0);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    FUN_710003a910(param_2);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_DOWN_LIFE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack648,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_DOWN_LIFE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack648);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack136,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0);
    uVar5 = lib::L2CValue::operator<=((L2CValue *)auStack136,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::~L2CValue((L2CValue *)auStack648);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack664,_WEAPON_PACMAN_FIREHYDRANT_STATUS_KIND_REMOVE);
      lib::L2CValue::L2CValue(aLStack680,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x68,(L2CValue)0x58);
      lib::L2CValue::~L2CValue(aLStack680);
      lib::L2CValue::~L2CValue(aLStack664);
      lib::L2CValue::L2CValue(param_1,0);
      goto LAB_710003ec80;
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_TOUCH_POS);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
  ppBVar9 = &param_2->moduleAccessor;
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,iVar3);
  lib::L2CValue::operator=(aLStack264,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_ROT_LR);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,iVar3);
  lib::L2CValue::operator=(aLStack232,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
  lib::L2CValue::operator=(aLStack600,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
  lib::L2CValue::operator=(aLStack424,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::L2CValue((L2CValue *)auStack136,0x118d74daa0);
  lib::L2CValue::L2CValue((L2CValue *)auStack648,0xede99a8b8);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack136);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack648);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
  lib::L2CValue::operator=(aLStack216,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack648);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
  lib::L2CValue::operator=(aLStack392,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::L2CValue((L2CValue *)auStack136,0x118d74daa0);
  lib::L2CValue::L2CValue((L2CValue *)auStack648,0x121eeef000);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack136);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack648);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
  lib::L2CValue::operator=(aLStack312,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack648);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_HIT_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,iVar3);
  lib::L2CValue::operator=(aLStack472,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,2);
  uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_3f0,aLStack472);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack136,0x118d74daa0);
    lib::L2CValue::L2CValue((L2CValue *)auStack648,0x111fd88d2a);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack136);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack648);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
    lib::L2CValue::operator=(aLStack216,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack648);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::L2CValue((L2CValue *)auStack136,0x118d74daa0);
    lib::L2CValue::L2CValue((L2CValue *)auStack648,0x124760704d);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack136);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack648);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
    lib::L2CValue::operator=(aLStack392,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack648);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::L2CValue((L2CValue *)auStack136,0x118d74daa0);
    lib::L2CValue::L2CValue((L2CValue *)auStack648,0x153220d146);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack136);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack648);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
    lib::L2CValue::operator=(aLStack312,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack648);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack648,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack648);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack136,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,true);
  uVar5 = lib::L2CValue::operator==((L2CValue *)auStack136,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::~L2CValue((L2CValue *)auStack648);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_ROT_RIGHT);
    uVar5 = lib::L2CValue::operator==(aLStack232,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,GROUND_TOUCH_FLAG_UP_LEFT);
      uVar5 = lib::L2CValue::operator==(aLStack264,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,180.0);
        uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_3f0,aLStack600);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL)
          ;
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
          goto LAB_710003c830;
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_GROUND_TOUCH_FLAG_DOWN_RIGHT);
      uVar5 = lib::L2CValue::operator==(aLStack264,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,270.0);
        uVar5 = lib::L2CValue::operator<(aLStack600,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL)
          ;
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
          goto LAB_710003c830;
        }
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,GROUND_TOUCH_FLAG_UP_RIGHT);
      uVar5 = lib::L2CValue::operator==(aLStack264,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) == 0) {
LAB_710003c73c:
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_GROUND_TOUCH_FLAG_DOWN_LEFT);
        uVar5 = lib::L2CValue::operator==(aLStack264,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,90.0);
          uVar5 = lib::L2CValue::operator<((L2CValue *)&local_3f0,aLStack600);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_3f0,
                       _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
            app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
            goto LAB_710003c830;
          }
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,180.0);
        uVar5 = lib::L2CValue::operator<=(aLStack600,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        if ((uVar5 & 1) == 0) goto LAB_710003c73c;
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
LAB_710003c830:
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      }
    }
  }
  lib::L2CValue::operator/(aLStack424,aLStack312);
  lib::L2CValue::operator=(aLStack440,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  fVar10 = (float)lib::L2CValue::as_number(aLStack440);
  app::lua_bind::AttackModule__set_power_mul_impl(*ppBVar9,fVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,2);
  uVar5 = lib::L2CValue::operator<(aLStack472,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack648,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack648);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack136,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,false);
    uVar5 = lib::L2CValue::operator==((L2CValue *)auStack136,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::~L2CValue((L2CValue *)auStack648);
    if ((uVar5 & 1) != 0) goto LAB_710003c8fc;
    lib::L2CValue::operator-(aLStack424,aLStack392);
    lib::L2CValue::operator=(aLStack424,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
    uVar5 = lib::L2CValue::operator<(aLStack424,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_ROT_REVERSE
                );
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_ROT_RIGHT);
      uVar5 = lib::L2CValue::operator==(aLStack232,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_ROT_RIGHT);
        lib::L2CValue::operator=(aLStack232,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_ROT_RIGHT);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_ROT_LR);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack136);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_ROT_LEFT);
        lib::L2CValue::operator=(aLStack232,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_ROT_LEFT);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_ROT_LR);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack136);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
      }
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,-1.0);
      lib::L2CValue::operator*(aLStack424,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::operator=(aLStack424,(L2CValue *)auStack136);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_NUM);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_3f0);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      puVar8 = &local_3f0;
      goto LAB_710003cc98;
    }
  }
  else {
LAB_710003c8fc:
    lib::L2CValue::operator+(aLStack424,aLStack216);
    lib::L2CValue::operator-(aLStack312);
    lib::L2CValue::L2CValue(aLStack728,aLStack312);
    lua2cpp::L2CFighterBase::clamp(param_2,(L2CValue)0x48,(L2CValue)0x38,(L2CValue)0x28);
    lib::L2CValue::operator=(aLStack424,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue(aLStack728);
    lib::L2CValue::~L2CValue(aLStack712);
    lib::L2CValue::~L2CValue(aLStack696);
    lib::L2CValue::L2CValue((L2CValue *)auStack136,0x118d74daa0);
    lib::L2CValue::L2CValue((L2CValue *)auStack648,0xddc6fd02c);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack136);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack648);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
    uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_3f0,aLStack424);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack648);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack136,0x118d74daa0);
      lib::L2CValue::L2CValue((L2CValue *)auStack648,0xddc6fd02c);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack136);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack648);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
      lib::L2CValue::operator=(aLStack424,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack648);
      puVar8 = auStack136;
LAB_710003cc98:
      lib::L2CValue::~L2CValue((L2CValue *)puVar8);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
  lib::L2CValue::operator=(aLStack616,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
  lib::L2CValue::operator=(aLStack520,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack648,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_INIT_CENTER);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack648);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack136,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,false);
  uVar5 = lib::L2CValue::operator==((L2CValue *)auStack136,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::~L2CValue((L2CValue *)auStack648);
  if ((uVar5 & 1) != 0) {
    uVar14 = app::lua_bind::GroundModule__get_down_movement_speed_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack760,(float)uVar14);
    lib::L2CValue::L2CValue(aLStack744,(float)((ulong)uVar14 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,aLStack760);
    lib::L2CValue::L2CValue((L2CValue *)auStack136,aLStack744);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x10,(L2CValue)0x78);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue(aLStack744);
    lib::L2CValue::~L2CValue(aLStack760);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack648,0x18cdc1683);
    lib::L2CValue::operator=(aLStack616,pLVar7);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack648,0x1fbdb2615);
    lib::L2CValue::operator=(aLStack520,pLVar7);
    lib::L2CValue::~L2CValue((L2CValue *)auStack648);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_CENTER_X);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
  lib::L2CValue::operator=(aLStack376,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_CENTER_Y);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
  lib::L2CValue::operator=(aLStack584,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::operator-(aLStack376);
  lib::L2CValue::operator=(aLStack504,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::operator-(aLStack584);
  lib::L2CValue::operator=(aLStack488,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  fVar10 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
  lib::L2CValue::operator=(aLStack248,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  fVar10 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
  lib::L2CValue::operator=(aLStack552,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  fVar10 = (float)app::lua_bind::PostureModule__pos_z_impl(*ppBVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
  lib::L2CValue::operator=(aLStack568,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_NUM);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
  lib::L2CValue::operator=(aLStack200,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,45.0);
  lib::L2CValue::operator=(aLStack536,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::operator=(aLStack280,aLStack424);
  uVar5 = lib::L2CValue::operator<=(aLStack424,aLStack536);
  if ((uVar5 & 1) == 0) {
    while( true ) {
      lib::L2CValue::operator-(aLStack424,aLStack536);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_3f0,(L2CValue *)auStack136);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      if ((uVar5 & 1) == 0) break;
      lib::L2CValue::operator-(aLStack424,aLStack536);
      lib::L2CValue::operator=(aLStack424,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
      lib::L2CValue::operator+(aLStack536,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_SPEED)
      ;
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack136);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::operator+(aLStack200,aLStack536);
      lib::L2CValue::L2CValue((L2CValue *)auStack648,0x118d74daa0);
      lib::L2CValue::L2CValue(aLStack776,0xddc6fd02c);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack648);
      uVar6 = lib::L2CValue::as_integer(aLStack776);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)auStack136,fVar10);
      uVar5 = lib::L2CValue::operator<((L2CValue *)auStack136,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::~L2CValue(aLStack776);
      lib::L2CValue::~L2CValue((L2CValue *)auStack648);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack648,0x118d74daa0);
        lib::L2CValue::L2CValue(aLStack776,0xddc6fd02c);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack648);
        uVar6 = lib::L2CValue::as_integer(aLStack776);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)auStack136,fVar10);
        lib::L2CValue::operator-((L2CValue *)auStack136,aLStack200);
        lib::L2CValue::operator=(aLStack424,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)auStack136);
        lib::L2CValue::~L2CValue(aLStack776);
        lib::L2CValue::~L2CValue((L2CValue *)auStack648);
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
        uVar5 = lib::L2CValue::operator<=(aLStack424,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::operator=(aLStack424,aLStack536);
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
        lib::L2CValue::operator+(aLStack424,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_3f0,
                   _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
        fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack136);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)auStack136);
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0x27baa4fe7b);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_3f0);
        app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::~L2CValue(aLStack808);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
        lib::L2CValue::operator+(aLStack280,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_3f0,
                   _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
        fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack136);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
        goto LAB_710003da34;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0x27baa4fe7b);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_3f0);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack824);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack648,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_HIT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack648);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack136,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,true);
      uVar5 = lib::L2CValue::operator==((L2CValue *)auStack136,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::~L2CValue((L2CValue *)auStack648);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
        lib::L2CValue::operator+(aLStack280,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_3f0,
                   _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
        fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack136);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
        goto LAB_710003da34;
      }
      lib::L2CValue::L2CValue(aLStack840,aLStack248);
      lib::L2CValue::L2CValue(aLStack856,aLStack552);
      lib::L2CValue::L2CValue(aLStack872,aLStack568);
      lib::L2CValue::L2CValue(aLStack888,aLStack600);
      lib::L2CValue::L2CValue(aLStack904,aLStack536);
      lib::L2CValue::L2CValue(aLStack920,aLStack232);
      lib::L2CValue::L2CValue(aLStack936,0.0);
      lib::L2CValue::L2CValue(aLStack952,0.0);
      FUN_71000403c0(param_2,aLStack840,aLStack856,aLStack872,aLStack888,aLStack904,aLStack920,
                     aLStack936,aLStack952);
      lib::L2CValue::~L2CValue(aLStack952);
      lib::L2CValue::~L2CValue(aLStack936);
      lib::L2CValue::~L2CValue(aLStack920);
      lib::L2CValue::~L2CValue(aLStack904);
      lib::L2CValue::~L2CValue(aLStack888);
      lib::L2CValue::~L2CValue(aLStack872);
      lib::L2CValue::~L2CValue(aLStack856);
      lib::L2CValue::~L2CValue(aLStack840);
      fVar10 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
      lib::L2CValue::operator=(aLStack248,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      fVar10 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
      lib::L2CValue::operator=(aLStack552,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      fVar10 = (float)app::lua_bind::PostureModule__pos_z_impl(*ppBVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
      lib::L2CValue::operator=(aLStack568,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
      lib::L2CValue::operator=(aLStack600,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack136,
                 _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_CENTER_X);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
      lib::L2CValue::operator=(aLStack376,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack136,
                 _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_CENTER_Y);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
      lib::L2CValue::operator=(aLStack584,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::operator-(aLStack376);
      lib::L2CValue::operator=(aLStack504,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::operator-(aLStack584);
      lib::L2CValue::operator=(aLStack488,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar9);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
    lib::L2CValue::operator+(aLStack424,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack136);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0x27baa4fe7b);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_3f0);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack968);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
    lib::L2CValue::operator+(aLStack280,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack136);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
  }
  else {
    lib::L2CValue::operator+(aLStack200,aLStack424);
    lib::L2CValue::L2CValue((L2CValue *)auStack648,0x118d74daa0);
    lib::L2CValue::L2CValue(aLStack776,0xddc6fd02c);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack648);
    uVar6 = lib::L2CValue::as_integer(aLStack776);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)auStack136,fVar10);
    uVar5 = lib::L2CValue::operator<((L2CValue *)auStack136,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::~L2CValue(aLStack776);
    lib::L2CValue::~L2CValue((L2CValue *)auStack648);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack648,0x118d74daa0);
      lib::L2CValue::L2CValue(aLStack776,0xddc6fd02c);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack648);
      uVar6 = lib::L2CValue::as_integer(aLStack776);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)auStack136,fVar10);
      lib::L2CValue::operator-((L2CValue *)auStack136,aLStack200);
      lib::L2CValue::operator=(aLStack424,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::~L2CValue(aLStack776);
      lib::L2CValue::~L2CValue((L2CValue *)auStack648);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
      uVar5 = lib::L2CValue::operator<=(aLStack424,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::operator=(aLStack424,aLStack280);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
    lib::L2CValue::operator+(aLStack424,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack136);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0x27baa4fe7b);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_3f0);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack792);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
    lib::L2CValue::operator+(aLStack280,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack136);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
  }
LAB_710003da34:
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_GROUND_ANGLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
  lib::L2CValue::operator=(aLStack296,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack136,
             _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_GROUND_ANGLE_PRE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
  lib::L2CValue::operator=(aLStack328,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
  uVar5 = lib::L2CValue::operator<(aLStack296,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
    uVar5 = lib::L2CValue::operator<((L2CValue *)&local_3f0,aLStack296);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
      lib::L2CValue::operator-(aLStack296,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::operator=(aLStack296,(L2CValue *)auStack136);
      goto LAB_710003db94;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
    lib::L2CValue::operator+(aLStack296,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::operator=(aLStack296,(L2CValue *)auStack136);
LAB_710003db94:
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
  uVar5 = lib::L2CValue::operator<(aLStack328,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
    uVar5 = lib::L2CValue::operator<((L2CValue *)&local_3f0,aLStack328);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
      lib::L2CValue::operator-(aLStack328,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::operator=(aLStack328,(L2CValue *)auStack136);
      goto LAB_710003dc5c;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
    lib::L2CValue::operator+(aLStack328,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::operator=(aLStack328,(L2CValue *)auStack136);
LAB_710003dc5c:
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
  lib::L2CValue::operator=(aLStack344,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
  lib::L2CValue::operator=(aLStack456,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack648,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_HIT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack648);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack136,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_3f0,true);
  uVar5 = lib::L2CValue::operator==((L2CValue *)auStack136,(L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack136);
  lib::L2CValue::~L2CValue((L2CValue *)auStack648);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack1248,aLStack248);
    lib::L2CValue::L2CValue(aLStack1264,aLStack552);
    lib::L2CValue::L2CValue(aLStack1280,aLStack568);
    lib::L2CValue::L2CValue(aLStack1296,aLStack600);
    lib::L2CValue::L2CValue(aLStack1312,aLStack424);
    lib::L2CValue::L2CValue(aLStack1328,aLStack232);
    lib::L2CValue::L2CValue(aLStack1344,aLStack616);
    lib::L2CValue::L2CValue(aLStack1360,aLStack520);
    FUN_71000403c0(param_2,aLStack1248,aLStack1264,aLStack1280,aLStack1296,aLStack1312,aLStack1328,
                   aLStack1344,aLStack1360);
    lib::L2CValue::~L2CValue(aLStack1360);
    lib::L2CValue::~L2CValue(aLStack1344);
    lib::L2CValue::~L2CValue(aLStack1328);
    lib::L2CValue::~L2CValue(aLStack1312);
    lib::L2CValue::~L2CValue(aLStack1296);
    lib::L2CValue::~L2CValue(aLStack1280);
    lib::L2CValue::~L2CValue(aLStack1264);
    pLVar7 = aLStack1248;
  }
  else {
    lib::L2CValue::operator=((L2CValue *)auStack184,aLStack296);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,false);
    lib::L2CValue::operator=(aLStack408,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack136,
               _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_USE_RIGHT_EDGE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_3f0);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack776,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_USE_LEFT_EDGE);
      iVar3 = lib::L2CValue::as_integer(aLStack776);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack648,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)auStack648);
      lib::L2CValue::~L2CValue((L2CValue *)auStack648);
      lib::L2CValue::~L2CValue(aLStack776);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      if ((bVar1 & 1U) != 0) goto LAB_710003dec4;
    }
    else {
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
LAB_710003dec4:
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,true);
      lib::L2CValue::operator=(aLStack408,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_GROUND_TOUCH_FLAG_DOWN_RIGHT);
    uVar5 = lib::L2CValue::operator==(aLStack264,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_GROUND_TOUCH_FLAG_DOWN_LEFT);
      uVar5 = lib::L2CValue::operator==(aLStack264,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_ROT_RIGHT);
        uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_3f0,aLStack232);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,90.0);
          lib::L2CValue::operator+((L2CValue *)auStack184,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          lib::L2CValue::operator=((L2CValue *)auStack184,(L2CValue *)auStack136);
          lib::L2CValue::~L2CValue((L2CValue *)auStack136);
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,false);
          uVar5 = lib::L2CValue::operator==(aLStack408,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_3f0,GROUND_TOUCH_FLAG_UP_LEFT);
            lib::L2CValue::operator=(aLStack264,(L2CValue *)&local_3f0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL)
          ;
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,false);
          uVar5 = lib::L2CValue::operator==(aLStack408,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_GROUND_TOUCH_FLAG_DOWN_RIGHT);
            lib::L2CValue::operator=(aLStack264,(L2CValue *)&local_3f0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL)
          ;
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
        }
        goto LAB_710003e518;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,GROUND_TOUCH_FLAG_UP_LEFT);
      uVar5 = lib::L2CValue::operator==(aLStack264,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_ROT_RIGHT);
        uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_3f0,aLStack232);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,180.0);
          lib::L2CValue::operator+((L2CValue *)auStack184,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          lib::L2CValue::operator=((L2CValue *)auStack184,(L2CValue *)auStack136);
          lib::L2CValue::~L2CValue((L2CValue *)auStack136);
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,false);
          uVar5 = lib::L2CValue::operator==(aLStack408,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_3f0,GROUND_TOUCH_FLAG_UP_RIGHT);
            lib::L2CValue::operator=(aLStack264,(L2CValue *)&local_3f0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL)
          ;
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,270.0);
          lib::L2CValue::operator-((L2CValue *)auStack184,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          lib::L2CValue::operator=((L2CValue *)auStack184,(L2CValue *)auStack136);
          lib::L2CValue::~L2CValue((L2CValue *)auStack136);
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,false);
          uVar5 = lib::L2CValue::operator==(aLStack408,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_GROUND_TOUCH_FLAG_DOWN_LEFT);
            lib::L2CValue::operator=(aLStack264,(L2CValue *)&local_3f0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL)
          ;
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        }
        goto LAB_710003e518;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,GROUND_TOUCH_FLAG_UP_RIGHT);
      uVar5 = lib::L2CValue::operator==(aLStack264,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_ROT_RIGHT);
        uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_3f0,aLStack232);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,270.0);
          lib::L2CValue::operator+((L2CValue *)auStack184,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          lib::L2CValue::operator=((L2CValue *)auStack184,(L2CValue *)auStack136);
          lib::L2CValue::~L2CValue((L2CValue *)auStack136);
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,false);
          uVar5 = lib::L2CValue::operator==(aLStack408,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_GROUND_TOUCH_FLAG_DOWN_RIGHT);
            lib::L2CValue::operator=(aLStack264,(L2CValue *)&local_3f0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL)
          ;
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,180.0);
          lib::L2CValue::operator-((L2CValue *)auStack184,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          lib::L2CValue::operator=((L2CValue *)auStack184,(L2CValue *)auStack136);
          lib::L2CValue::~L2CValue((L2CValue *)auStack136);
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,false);
          uVar5 = lib::L2CValue::operator==(aLStack408,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_3f0,GROUND_TOUCH_FLAG_UP_LEFT);
            lib::L2CValue::operator=(aLStack264,(L2CValue *)&local_3f0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL)
          ;
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
        }
        goto LAB_710003e518;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_ROT_RIGHT);
      uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_3f0,aLStack232);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,false);
        uVar5 = lib::L2CValue::operator==(aLStack408,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_GROUND_TOUCH_FLAG_DOWN_LEFT);
          lib::L2CValue::operator=(aLStack264,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,90.0);
        lib::L2CValue::operator-((L2CValue *)auStack184,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        lib::L2CValue::operator=((L2CValue *)auStack184,(L2CValue *)auStack136);
        lib::L2CValue::~L2CValue((L2CValue *)auStack136);
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,false);
        uVar5 = lib::L2CValue::operator==(aLStack408,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,GROUND_TOUCH_FLAG_UP_RIGHT);
          lib::L2CValue::operator=(aLStack264,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_DECCEL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
      }
LAB_710003e518:
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack648,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_KEEP_ANGLE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack648);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack136,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,false);
    uVar5 = lib::L2CValue::operator==((L2CValue *)auStack136,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::~L2CValue((L2CValue *)auStack648);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack136,
                 _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_HIT_ROT_SPEED);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
      lib::L2CValue::operator=(aLStack152,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::operator-(aLStack232);
      lib::L2CValue::operator*(aLStack152,(L2CValue *)auStack136);
      puVar8 = &local_3f0;
      lib::L2CValue::operator=(aLStack152,(L2CValue *)puVar8);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CAgent::math_rad((L2CAgent *)aLStack152,(L2CValue *)puVar8);
      fVar10 = (float)lib::L2CValue::as_number(aLStack504);
      fVar11 = (float)lib::L2CValue::as_number(aLStack488);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack136);
      uVar14 = app::sv_math::vec2_rot(fVar10,fVar11,fVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,(float)uVar14);
      lib::L2CValue::L2CValue(aLStack992,(float)((ulong)uVar14 >> 0x20));
      lib::L2CValue::operator=(aLStack344,(L2CValue *)&local_3f0);
      lib::L2CValue::operator=(aLStack456,aLStack992);
      lib::L2CValue::~L2CValue(aLStack992);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::operator+(aLStack600,aLStack152);
      lib::L2CValue::operator=(aLStack600,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::operator+(aLStack200,aLStack152);
      lib::L2CValue::operator=(aLStack200,(L2CValue *)&local_3f0);
      puVar8 = &local_3f0;
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_NUM);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
      lib::L2CValue::operator=(aLStack200,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,90.0);
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_3f0,aLStack200);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::operator-((L2CValue *)auStack184,aLStack600);
        lib::L2CValue::operator=((L2CValue *)auStack184,(L2CValue *)&local_3f0);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
        lib::L2CValue::operator=((L2CValue *)auStack184,(L2CValue *)&local_3f0);
      }
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::operator+(aLStack600,(L2CValue *)auStack184);
      lib::L2CValue::operator=(aLStack600,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::operator+(aLStack200,(L2CValue *)auStack184);
      puVar8 = &local_3f0;
      lib::L2CValue::operator=(aLStack200,(L2CValue *)puVar8);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CAgent::math_rad((L2CAgent *)auStack184,(L2CValue *)puVar8);
      fVar10 = (float)lib::L2CValue::as_number(aLStack504);
      fVar11 = (float)lib::L2CValue::as_number(aLStack488);
      fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack136);
      uVar14 = app::sv_math::vec2_rot(fVar10,fVar11,fVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,(float)uVar14);
      lib::L2CValue::L2CValue(aLStack992,(float)((ulong)uVar14 >> 0x20));
      lib::L2CValue::operator=(aLStack344,(L2CValue *)&local_3f0);
      lib::L2CValue::operator=(aLStack456,aLStack992);
      lib::L2CValue::~L2CValue(aLStack992);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      puVar8 = auStack136;
    }
    lib::L2CValue::~L2CValue((L2CValue *)puVar8);
    lib::L2CValue::operator+(aLStack584,aLStack520);
    lib::L2CValue::operator=(aLStack584,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_HIT_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_TOUCH_POS);
    iVar3 = lib::L2CValue::as_integer(aLStack264);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack648,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_USE_EDGE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack648);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack136,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,false);
    uVar5 = lib::L2CValue::operator==((L2CValue *)auStack136,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::~L2CValue((L2CValue *)auStack648);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_NUM);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_3f0);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_HIT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_SET_CENTER);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_KEEP_ANGLE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_3f0);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_HIT_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,iVar3);
    lib::L2CValue::operator=(aLStack472,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,1);
    lib::L2CValue::operator-(aLStack472,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue((L2CValue *)auStack648,0x118d74daa0);
    lib::L2CValue::L2CValue(aLStack776,0xbf8df64e6);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack648);
    uVar6 = lib::L2CValue::as_integer(aLStack776);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,iVar3);
    uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_3f0,(L2CValue *)auStack136);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue(aLStack776);
    lib::L2CValue::~L2CValue((L2CValue *)auStack648);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack1024,_WEAPON_PACMAN_FIREHYDRANT_STATUS_KIND_REMOVE);
      lib::L2CValue::L2CValue(aLStack1040,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::~L2CValue(aLStack1040);
      lib::L2CValue::~L2CValue(aLStack1024);
      lib::L2CValue::L2CValue(param_1,1);
      goto LAB_710003ec80;
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack136,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_ROT_REVERSE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack1056,_WEAPON_PACMAN_FIREHYDRANT_STATUS_KIND_REMOVE);
      lib::L2CValue::L2CValue(aLStack1072,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::~L2CValue(aLStack1072);
      lib::L2CValue::~L2CValue(aLStack1056);
      lib::L2CValue::L2CValue(param_1,1);
      goto LAB_710003ec80;
    }
    lib::L2CValue::L2CValue(aLStack1088,aLStack200);
    FUN_7100040cd0(auStack136,param_2,aLStack1088);
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,true);
    uVar5 = lib::L2CValue::operator==((L2CValue *)auStack136,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::~L2CValue(aLStack1088);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(param_1,0);
      goto LAB_710003ec80;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_3f0,90.0);
    uVar5 = lib::L2CValue::operator<(aLStack200,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack136,
                 _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_GROUND_ANGLE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
      lib::L2CValue::operator=(aLStack296,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack136,
                 _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_GROUND_ANGLE_PRE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack136);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
      lib::L2CValue::operator=(aLStack328,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
      uVar5 = lib::L2CValue::operator<(aLStack296,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
        uVar5 = lib::L2CValue::operator<((L2CValue *)&local_3f0,aLStack296);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
          lib::L2CValue::operator-(aLStack296,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          lib::L2CValue::operator=(aLStack296,(L2CValue *)auStack136);
          goto LAB_710003ef18;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
        lib::L2CValue::operator+(aLStack296,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        lib::L2CValue::operator=(aLStack296,(L2CValue *)auStack136);
LAB_710003ef18:
        lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
      uVar5 = lib::L2CValue::operator<(aLStack328,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
        uVar5 = lib::L2CValue::operator<((L2CValue *)&local_3f0,aLStack328);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
          lib::L2CValue::operator-(aLStack328,(L2CValue *)&local_3f0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
          lib::L2CValue::operator=(aLStack328,(L2CValue *)auStack136);
          goto LAB_710003efe0;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
        lib::L2CValue::operator+(aLStack328,(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        lib::L2CValue::operator=(aLStack328,(L2CValue *)auStack136);
LAB_710003efe0:
        lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      }
      pLVar7 = aLStack328;
      lib::L2CValue::operator-(aLStack296,pLVar7);
      lib::L2CAgent::math_abs((L2CAgent *)auStack136,pLVar7);
      lib::L2CValue::operator=((L2CValue *)(auStack184 + 0x10),(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,0.0);
      lib::L2CValue::operator=(aLStack360,(L2CValue *)&local_3f0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,_WEAPON_PACMAN_FIREHYDRANT_ROT_RIGHT);
      uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_3f0,aLStack232);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::operator-(aLStack328,aLStack296);
        lib::L2CValue::operator=(aLStack360,(L2CValue *)&local_3f0);
      }
      else {
        lib::L2CValue::operator-(aLStack296,aLStack328);
        lib::L2CValue::operator=(aLStack360,(L2CValue *)&local_3f0);
      }
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,180.0);
      puVar8 = &local_3f0;
      lib::L2CValue::operator-(aLStack360,(L2CValue *)puVar8);
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      lib::L2CAgent::math_abs((L2CAgent *)auStack648,(L2CValue *)puVar8);
      lib::L2CValue::operator=((L2CValue *)(auStack648 + 0x10),(L2CValue *)auStack136);
      lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      lib::L2CValue::~L2CValue((L2CValue *)auStack648);
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_3f0,(L2CValue *)(auStack648 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,360.0);
        lib::L2CValue::operator-((L2CValue *)(auStack648 + 0x10),(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        lib::L2CValue::operator=((L2CValue *)(auStack648 + 0x10),(L2CValue *)auStack136);
        lib::L2CValue::~L2CValue((L2CValue *)auStack136);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_3f0,1.0);
      uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_3f0,(L2CValue *)(auStack184 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack136,0x118d74daa0);
        lib::L2CValue::L2CValue((L2CValue *)auStack648,0xa75b1c872);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack136);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack648);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_3f0,fVar10);
        uVar5 = lib::L2CValue::operator<((L2CValue *)(auStack648 + 0x10),(L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
        lib::L2CValue::~L2CValue((L2CValue *)auStack648);
        lib::L2CValue::~L2CValue((L2CValue *)auStack136);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack1104,_WEAPON_PACMAN_FIREHYDRANT_STATUS_KIND_REMOVE);
          lib::L2CValue::L2CValue(aLStack1120,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::~L2CValue(aLStack1120);
          lib::L2CValue::~L2CValue(aLStack1104);
          lib::L2CValue::L2CValue(param_1,1);
          goto LAB_710003ec80;
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack1136,aLStack600);
    lib::L2CValue::L2CValue(aLStack1152,aLStack232);
    FUN_7100040f70(&local_3f0,param_2,aLStack1136);
    lib::L2CValue::operator=(aLStack600,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue(aLStack1152);
    lib::L2CValue::~L2CValue(aLStack1136);
    lib::L2CValue::operator+(aLStack248,aLStack376);
    lib::L2CValue::operator+((L2CValue *)auStack136,aLStack344);
    lib::L2CValue::operator=(aLStack344,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::operator+(aLStack552,aLStack584);
    lib::L2CValue::operator+((L2CValue *)auStack136,aLStack456);
    lib::L2CValue::operator=(aLStack456,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack136);
    lib::L2CValue::operator+(aLStack344,aLStack616);
    lib::L2CValue::operator=(aLStack344,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::operator+(aLStack456,aLStack520);
    lib::L2CValue::operator=(aLStack456,(L2CValue *)&local_3f0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_3f0);
    lib::L2CValue::L2CValue(aLStack1168,aLStack344);
    lib::L2CValue::L2CValue(aLStack1184,aLStack456);
    lib::L2CValue::L2CValue(aLStack1200,aLStack568);
    uVar5 = lib::L2CValue::as_number(aLStack1168);
    lVar15 = lib::L2CValue::as_number(aLStack1184);
    uVar13 = lib::L2CValue::as_number(aLStack1200);
    local_3f0 = uVar5 & 0xffffffff | lVar15 << 0x20;
    uStack1000 = (ulong)uVar13;
    app::lua_bind::PostureModule__set_pos_impl(*ppBVar9,(Vector3f *)&local_3f0);
    lib::L2CValue::~L2CValue(aLStack1200);
    lib::L2CValue::~L2CValue(aLStack1184);
    lib::L2CValue::~L2CValue(aLStack1168);
    lib::L2CValue::L2CValue(aLStack1216,aLStack600);
    FUN_71000412b0(param_2,aLStack1216);
    lib::L2CValue::~L2CValue(aLStack1216);
    lib::L2CValue::L2CValue(aLStack1232,aLStack424);
    pLVar7 = aLStack1232;
  }
  lib::L2CValue::~L2CValue(pLVar7);
  lib::L2CValue::L2CValue(param_1,0);
LAB_710003ec80:
  lib::L2CValue::~L2CValue((L2CValue *)(auStack648 + 0x10));
  lib::L2CValue::~L2CValue(aLStack616);
  lib::L2CValue::~L2CValue(aLStack600);
  lib::L2CValue::~L2CValue(aLStack584);
  lib::L2CValue::~L2CValue(aLStack568);
  lib::L2CValue::~L2CValue(aLStack552);
  lib::L2CValue::~L2CValue(aLStack536);
  lib::L2CValue::~L2CValue(aLStack520);
  lib::L2CValue::~L2CValue(aLStack504);
  lib::L2CValue::~L2CValue(aLStack488);
  lib::L2CValue::~L2CValue(aLStack472);
  lib::L2CValue::~L2CValue(aLStack456);
  lib::L2CValue::~L2CValue(aLStack440);
  lib::L2CValue::~L2CValue(aLStack424);
  lib::L2CValue::~L2CValue(aLStack408);
  lib::L2CValue::~L2CValue(aLStack392);
  lib::L2CValue::~L2CValue(aLStack376);
  lib::L2CValue::~L2CValue(aLStack360);
  lib::L2CValue::~L2CValue(aLStack344);
  lib::L2CValue::~L2CValue(aLStack328);
  lib::L2CValue::~L2CValue(aLStack312);
  lib::L2CValue::~L2CValue(aLStack296);
  lib::L2CValue::~L2CValue(aLStack280);
  lib::L2CValue::~L2CValue(aLStack264);
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue(aLStack232);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack200);
  lib::L2CValue::~L2CValue((L2CValue *)auStack184);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack184 + 0x10));
  lib::L2CValue::~L2CValue(aLStack152);
  return;
}

