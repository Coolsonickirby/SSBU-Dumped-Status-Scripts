
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100012390(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  Vector2f VVar7;
  L2CValue *pLVar8;
  ulong *puVar9;
  float fVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  ulong local_290;
  ulong uStack648;
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [24];
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
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack152,0);
  lib::L2CValue::L2CValue(aLStack168,0);
  lib::L2CValue::L2CValue(aLStack184,0);
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
  lib::L2CValue::L2CValue(aLStack376,false);
  lib::L2CValue::L2CValue(aLStack392,0);
  lib::L2CValue::L2CValue(aLStack408,0);
  lib::L2CValue::L2CValue(aLStack424,0);
  lib::L2CValue::L2CValue(aLStack440,0);
  lib::L2CValue::L2CValue(aLStack456,0);
  lib::L2CValue::L2CValue(aLStack472,0);
  lib::L2CValue::L2CValue(aLStack488,0);
  lib::L2CValue::L2CValue(aLStack504,0);
  lib::L2CValue::L2CValue(aLStack136,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack520,0x4f4f0637c);
  uVar5 = lib::L2CValue::as_integer(aLStack136);
  uVar6 = lib::L2CValue::as_integer(aLStack520);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_290,fVar10);
  lib::L2CValue::operator=(aLStack152,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::~L2CValue(aLStack520);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::L2CValue(aLStack136,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack520,0x6017d9eb2);
  uVar5 = lib::L2CValue::as_integer(aLStack136);
  uVar6 = lib::L2CValue::as_integer(aLStack520);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_290,fVar10);
  lib::L2CValue::operator=(aLStack184,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::~L2CValue(aLStack520);
  lib::L2CValue::~L2CValue(aLStack136);
  fVar10 = (float)app::lua_bind::PostureModule__scale_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_290,fVar10);
  lib::L2CValue::operator=(aLStack328,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  fVar10 = (float)app::lua_bind::PostureModule__pos_x_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_290,fVar10);
  lib::L2CValue::operator=(aLStack232,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  fVar10 = (float)app::lua_bind::PostureModule__pos_y_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_290,fVar10);
  lib::L2CValue::operator=(aLStack408,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  fVar10 = (float)app::lua_bind::PostureModule__pos_z_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_290,fVar10);
  lib::L2CValue::operator=(aLStack248,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_290,fVar10);
  lib::L2CValue::operator=(aLStack456,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::L2CValue((L2CValue *)&local_290,true);
  lib::L2CValue::operator=(aLStack376,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  pLVar8 = (L2CValue *)0x0;
  fVar10 = (float)app::lua_bind::PostureModule__rot_z_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),0);
  lib::L2CValue::L2CValue(aLStack136,fVar10);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack136,pLVar8);
  lib::L2CValue::operator=(aLStack168,(L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::L2CValue((L2CValue *)&local_290,0.0);
  puVar9 = &local_290;
  uVar5 = lib::L2CValue::operator==(aLStack168,(L2CValue *)puVar9);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  if ((uVar5 & 1) == 0) {
    lib::L2CAgent::math_cos((L2CAgent *)aLStack168,(L2CValue *)puVar9);
    puVar9 = &local_290;
    lib::L2CValue::operator=(aLStack424,(L2CValue *)puVar9);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CAgent::math_sin((L2CAgent *)aLStack168,(L2CValue *)puVar9);
    lib::L2CValue::operator=(aLStack264,(L2CValue *)&local_290);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::operator=(aLStack488,aLStack424);
    lib::L2CValue::operator-(aLStack264);
    lib::L2CValue::operator=(aLStack472,(L2CValue *)&local_290);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::L2CValue((L2CValue *)&local_290,false);
    lib::L2CValue::operator=(aLStack376,(L2CValue *)&local_290);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  }
  lib::L2CValue::L2CValue(aLStack136,_FIGHTER_DONKEY_STATUS_SPECIAL_LW_FLAG_ATTACK);
  iVar3 = lib::L2CValue::as_integer(aLStack136);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_290,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_290);
  lib::L2CValue::~L2CValue((L2CValue *)&local_290);
  lib::L2CValue::~L2CValue(aLStack136);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_290,_FIGHTER_DONKEY_STATUS_SPECIAL_LW_FLAG_ATTACK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_290);
    app::lua_bind::WorkModule__off_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::L2CValue(aLStack520,GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer(aLStack520);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4);
    lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack136);
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_290);
    lib::L2CValue::~L2CValue((L2CValue *)&local_290);
    lib::L2CValue::~L2CValue(aLStack136);
    lib::L2CValue::~L2CValue(aLStack520);
    if ((bVar2 & 1U) == 0) {
      uVar4 = 1;
      do {
        lib::L2CValue::L2CValue(aLStack520,uVar4 - 1);
        iVar3 = lib::L2CValue::as_integer(aLStack520);
        bVar1 = app::lua_bind::AttackModule__is_attack_impl
                          (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3,false);
        lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_290,true);
        uVar5 = lib::L2CValue::operator==(aLStack136,(L2CValue *)&local_290);
        lib::L2CValue::~L2CValue((L2CValue *)&local_290);
        lib::L2CValue::~L2CValue(aLStack136);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::operator*(aLStack152,aLStack456);
          lib::L2CValue::operator=(aLStack440,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::operator*(aLStack184,aLStack520);
          lib::L2CValue::L2CValue((L2CValue *)&local_290,1.5);
          lib::L2CValue::operator*(aLStack184,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::operator-(aLStack536,aLStack552);
          lib::L2CValue::operator=(aLStack200,aLStack136);
          lib::L2CValue::~L2CValue(aLStack136);
          lib::L2CValue::~L2CValue(aLStack552);
          lib::L2CValue::~L2CValue(aLStack536);
          lib::L2CValue::operator+(aLStack200,aLStack440);
          lib::L2CValue::operator=(aLStack200,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::operator*(aLStack200,aLStack328);
          lib::L2CValue::operator=(aLStack200,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack376);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::operator*(aLStack200,aLStack424);
            lib::L2CValue::L2CValue((L2CValue *)&local_290,1.0);
            lib::L2CValue::operator*((L2CValue *)&local_290,aLStack264);
            lib::L2CValue::~L2CValue((L2CValue *)&local_290);
            lib::L2CValue::operator-(aLStack552,aLStack568);
            lib::L2CValue::operator+(aLStack232,aLStack536);
            lib::L2CValue::operator=(aLStack504,aLStack136);
            lib::L2CValue::~L2CValue(aLStack136);
            lib::L2CValue::~L2CValue(aLStack536);
            lib::L2CValue::~L2CValue(aLStack568);
            lib::L2CValue::~L2CValue(aLStack552);
            lib::L2CValue::operator*(aLStack200,aLStack264);
            lib::L2CValue::L2CValue((L2CValue *)&local_290,1.0);
            lib::L2CValue::operator*((L2CValue *)&local_290,aLStack424);
            lib::L2CValue::~L2CValue((L2CValue *)&local_290);
            lib::L2CValue::operator+(aLStack552,aLStack568);
            lib::L2CValue::operator+(aLStack408,aLStack536);
            lib::L2CValue::operator=(aLStack296,aLStack136);
            lib::L2CValue::~L2CValue(aLStack136);
            lib::L2CValue::~L2CValue(aLStack536);
            lib::L2CValue::~L2CValue(aLStack568);
            lib::L2CValue::~L2CValue(aLStack552);
          }
          else {
            lib::L2CValue::operator+(aLStack232,aLStack200);
            lib::L2CValue::operator=(aLStack504,(L2CValue *)&local_290);
            lib::L2CValue::~L2CValue((L2CValue *)&local_290);
            lib::L2CValue::operator=(aLStack296,aLStack408);
          }
          pLVar8 = aLStack248;
          lib::L2CValue::operator=(aLStack312,pLVar8);
          VVar7 = SUB81(pLVar8,0);
          lib::L2CValue::as_number(aLStack504);
          lib::L2CValue::as_number(aLStack296);
          fVar10 = 0.0;
          bVar1 = app::lua_bind::GroundModule__check_down_correct_pos_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),VVar7);
          lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue((L2CValue *)&local_290,false);
          uVar5 = lib::L2CValue::operator==(aLStack136,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::~L2CValue(aLStack136);
          if ((uVar5 & 1) == 0) {
            uVar12 = app::lua_bind::GroundModule__get_latest_down_correct_pos_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
            lib::L2CValue::L2CValue(aLStack600,(float)uVar12);
            fVar10 = 0.0;
            lib::L2CValue::L2CValue(aLStack584,(float)((ulong)uVar12 >> 0x20));
            lib::L2CValue::L2CValue((L2CValue *)&local_290,aLStack600);
            lib::L2CValue::L2CValue(aLStack136,aLStack584);
            lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x70,(L2CValue)0x78);
            lib::L2CValue::~L2CValue(aLStack136);
            lib::L2CValue::~L2CValue((L2CValue *)&local_290);
            lib::L2CValue::~L2CValue(aLStack584);
            lib::L2CValue::~L2CValue(aLStack600);
            pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack536,0x18cdc1683);
            lib::L2CValue::operator=(aLStack504,pLVar8);
            pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack536,0x1fbdb2615);
            lib::L2CValue::operator=(aLStack296,pLVar8);
            lib::L2CValue::operator=(aLStack312,aLStack248);
            lib::L2CValue::~L2CValue(aLStack536);
          }
          else {
            lib::L2CValue::operator=(aLStack504,aLStack232);
            lib::L2CValue::operator=(aLStack296,aLStack408);
            lib::L2CValue::operator=(aLStack312,aLStack248);
          }
          lib::L2CValue::operator-(aLStack504,aLStack232);
          lib::L2CValue::operator=(aLStack504,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::operator-(aLStack296,aLStack408);
          lib::L2CValue::operator=(aLStack296,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::operator-(aLStack312,aLStack248);
          lib::L2CValue::operator=(aLStack312,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack376);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::operator*(aLStack504,aLStack488);
            lib::L2CValue::operator*(aLStack296,aLStack472);
            lib::L2CValue::operator-(aLStack136,aLStack536);
            lib::L2CValue::operator=(aLStack344,(L2CValue *)&local_290);
            lib::L2CValue::~L2CValue((L2CValue *)&local_290);
            lib::L2CValue::~L2CValue(aLStack536);
            lib::L2CValue::~L2CValue(aLStack136);
            lib::L2CValue::operator*(aLStack504,aLStack472);
            lib::L2CValue::operator*(aLStack296,aLStack488);
            lib::L2CValue::operator+(aLStack136,aLStack536);
            lib::L2CValue::operator=(aLStack296,(L2CValue *)&local_290);
            lib::L2CValue::~L2CValue((L2CValue *)&local_290);
            lib::L2CValue::~L2CValue(aLStack536);
            lib::L2CValue::~L2CValue(aLStack136);
            lib::L2CValue::operator=(aLStack504,aLStack344);
          }
          lib::L2CValue::L2CValue(aLStack136);
          lib::L2CValue::L2CValue(aLStack536);
          lib::L2CValue::L2CValue(aLStack552);
          lib::L2CValue::L2CValue(aLStack568,false);
          iVar3 = lib::L2CValue::as_integer(aLStack520);
          bVar1 = lib::L2CValue::as_bool(aLStack568);
          uVar12 = app::lua_bind::AttackModule__get_offset2_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3,
                              (bool)(bVar1 & 1));
          lib::L2CValue::L2CValue((L2CValue *)&local_290,(float)uVar12);
          lib::L2CValue::L2CValue(aLStack640,(float)((ulong)uVar12 >> 0x20));
          lib::L2CValue::L2CValue(aLStack624,fVar10);
          lib::L2CValue::operator=(aLStack136,(L2CValue *)&local_290);
          lib::L2CValue::operator=(aLStack536,aLStack640);
          lib::L2CValue::operator=(aLStack552,aLStack624);
          lib::L2CValue::~L2CValue(aLStack624);
          lib::L2CValue::~L2CValue(aLStack640);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::~L2CValue(aLStack568);
          lib::L2CValue::operator+(aLStack504,aLStack136);
          lib::L2CValue::operator=(aLStack504,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::operator+(aLStack296,aLStack536);
          lib::L2CValue::operator=(aLStack296,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::operator+(aLStack312,aLStack552);
          lib::L2CValue::operator=(aLStack312,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::L2CValue(aLStack672,0x1018dfb2f4);
          lib::L2CValue::L2CValue(aLStack688,0x602126814);
          uVar5 = lib::L2CValue::as_integer(aLStack672);
          uVar6 = lib::L2CValue::as_integer(aLStack688);
          fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5,
                                     uVar6);
          lib::L2CValue::L2CValue(aLStack568,fVar10);
          lib::L2CValue::operator+(aLStack296,aLStack568);
          lib::L2CValue::operator=(aLStack296,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::~L2CValue(aLStack568);
          lib::L2CValue::~L2CValue(aLStack688);
          lib::L2CValue::~L2CValue(aLStack672);
          lib::L2CValue::operator/(aLStack312,aLStack328);
          lib::L2CValue::operator=(aLStack280,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::operator/(aLStack296,aLStack328);
          lib::L2CValue::operator=(aLStack392,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::operator*(aLStack504,aLStack456);
          lib::L2CValue::operator/(aLStack568,aLStack328);
          lib::L2CValue::operator=(aLStack216,(L2CValue *)&local_290);
          lib::L2CValue::~L2CValue((L2CValue *)&local_290);
          lib::L2CValue::~L2CValue(aLStack568);
          iVar3 = lib::L2CValue::as_integer(aLStack520);
          uVar5 = lib::L2CValue::as_number(aLStack280);
          lVar13 = lib::L2CValue::as_number(aLStack392);
          uVar11 = lib::L2CValue::as_number(aLStack216);
          local_290 = uVar5 & 0xffffffff | lVar13 << 0x20;
          uStack648 = (ulong)uVar11;
          bVar1 = app::lua_bind::AttackModule__set_offset_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3,
                             (Vector3f *)&local_290);
          lib::L2CValue::L2CValue(aLStack704,(bool)(bVar1 & 1));
          lib::L2CValue::~L2CValue(aLStack704);
          lib::L2CValue::~L2CValue(aLStack552);
          lib::L2CValue::~L2CValue(aLStack536);
          lib::L2CValue::~L2CValue(aLStack136);
        }
        lib::L2CValue::~L2CValue(aLStack520);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 5);
    }
  }
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
  lib::L2CValue::~L2CValue(aLStack184);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack152);
  return;
}

